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
	
	id = msgget(55, IPC_CREAT|0644);
	
	printf("id = %d\n", id);
	
	v.mtype = atoi(argv[1]);		//arg 1 is type of msg converting ascii to int
	strcpy(v.data, argv[2]);		//arg 2 is message
	
	msgsnd(id, &v, strlen(v.data)+1, 0);	//flag IPC_NOWAIT
	
	return 0;
}
