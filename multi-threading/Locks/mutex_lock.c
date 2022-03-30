#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;		//declaration of thread condition variable

pthread_cond_t lock = PTHREAD_MUTEX_INITIALIZER;

int done = 1;

void *foo(void *arg)
{
	char *str = (char *) arg;
	
	printf("thread task called by : %s\n", str);
	
	//acquire a lock
	
	pthread_mutex_lock(&lock);
	
	if(done == 1)
	{
		done = 2;
		printf("waiting on condition variable cond1\n");
		pthread_cond_wait(&cond1, &lock);
	}
	
	else
	{
		printf("signaling condition variable cond2\n");
		pthread_cond_signal(&cond1);
	}
	
	//release lock
	pthread_mutex_unlock(&lock);
	
	printf("returning thread\n");
	
	return NULL;
}


//driver code

void main()
{
	pthread_t th1, th2;
	
	//pthread_mutex_init(&my_mutex, NULL);		//initialize mutex lock
	
	pthread_create(&th1, NULL, foo, "ThDone");
	
	//sleep for 1sec -> thd 1 will run first
	sleep(1);
	
	//done = 2;
	pthread_create(&th2, NULL, foo, "TH2");
	
	//pthread_join(th1, NULL);
	pthread_join(th2, NULL);

	//printf("sharedVal is %d\n", sharedVal);
	
}
