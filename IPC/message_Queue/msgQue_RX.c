#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>


struct msgBuff{
	long mtype;
	char data[512];
};

int main(int argc, char *argv[])
{
	struct msgBuff v;
	int id;
	
	if(argc != 2)
	{
		printf("usage : ./msgQue_RX type \n");
		printf("Example: msqQue_RX 5 \n");
		
		return 0;
	}
	
	id = msgget(55, IPC_CREAT|0644);		//msgget(key, perm)
	
	if(id<0)
	{
		perror("msgget");
		return 0;
	}
	
	msgrcv(id, &v, sizeof(v), atoi(argv[1]), 0);
	printf("Data : %s\n", v.data);
	
	return 0;
}
