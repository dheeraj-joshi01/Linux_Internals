//get and set priority and policies

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


void *my(void *i)
{
	printf("I am in %d thread \n",(int *)i);
}

int main(int argc, char * argv[])
{	
	pthread_t id;
	struct sched_param param;
	int priority, policy, ret;
	
	//scheduling parameters of target thread
	ret = pthread_getschedparam(pthread_self(), &policy, &param);
	
	printf("--------------main thread------------\npolicy : %d \tPriority : %d\n", policy,param.sched_priority);
	
	policy = SCHED_FIFO;
	param.sched_priority = 3;
	pthread_setschedparam(pthread_self(), policy, &param);			//changing priority

	pthread_getschedparam(pthread_self(), &policy, &param);
	
	printf("--------------main thread------------\npolicy : %d \tPriority : %d\n", policy,param.sched_priority);
	
		
	return 0;
}
