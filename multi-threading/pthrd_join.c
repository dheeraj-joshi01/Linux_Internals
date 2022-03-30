//thread join with both args of join()

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t t1, t2, t3;

static void* joinFunc(void *arg)
{
	char *s = (char *) arg;
	printf("inside join function\n");
	sleep(2);
	
	return (void*) strlen(s);
}

void* func1(void *arg)
{
	//int i =19;
	printf("1st thread in execution\n");
	return NULL;
}

void* func2(void *arg)
{
	printf("2nd thread in execution\n");
	return NULL;
}

void* func3(void *arg)
{
	printf("3rd thread in execution\n");
	return NULL;
}

int main(void)
{
	void *res;
	
	int ret = pthread_create(&t1, NULL, func1, NULL);
	int ret2 = pthread_create(&t2, NULL, joinFunc, "Hello World");
	int ret3 = pthread_create(&t3, NULL, func3, NULL);
	
	pthread_join(t1, NULL);		//pthread_join() has 2 actions to perform------1. joins given thrd-id with main process exec.		2. forces process for completion of thrd ---thrd-id
	
	//pthread_join(t2, NULL);			//in place of NULL----returned value of function can be there
	pthread_join(t2, &res);	
	
	printf("res  = %ld\n", (long)res);
	pthread_join(t3, NULL);
	return 0;
}

//use this to compile------- "gcc pthread.c -o pthrd -l pthread"	
