//using gdb to debug exec code

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void myprint(char *msg)
{
	if(msg != NULL)
	{
		printf("msg : %s\n", msg);	
	}
}


int main()
{
	char buff[] = "linux";
		
	myprint(buff);
	
	//printf("copied str is -> %s\n", name);
	
	return 0;
	
}
