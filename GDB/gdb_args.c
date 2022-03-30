
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	int i;
	printf("\n file name: %s\n",argv[0]);
	printf("\n Total no. of arg : %d\n",argc);
	printf("\n Arg passed : \n");
	
	for(i=1; i<argc;i++)
	{
		printf("%s ", argv[i]);
	}
	
	printf("\n");
	
	return 0;
	
}
