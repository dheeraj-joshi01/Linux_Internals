#include<stdio.h>
#include<unistd.h>

int fd[2];


void parent_code()
{
	char *wbuf1 = "this is write buffer 1...";
	char *wbuf2 = "this is write buffer 2...";
	
	close(fd[0]);
	
	write(fd[1], wbuf1, 25);
	write(fd[1], wbuf2, 25);
	
	printf(" end of parent\n");
	
}


void child_code()
{
	char *buf[100];
	int n, i;
	
	close(fd[1]);
	
	n = read(fd[0], buf, 100);
	printf("No of char read : %d\n", n);
	
	
	for(i = 0;i<n;i++)
	{
		printf("%c", buf[i]);
	}
	
	printf(" end of child\n");
}


int main()
{
	
	int res, i;
	
	
	pid_t pid1;
	
	res = pipe(fd);
	pid1 = fork();
	
	
	if(pid1 == 0)
	{
		child_code();
	}
	
	else
	{
		parent_code();
	}
	
	printf("\n");


	return 0;
}


