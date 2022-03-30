#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int p[2];
	//int res, i;
	
	
	pipe(p);
	
	printf("read end of pipe = %d\t write to pipe = %d\n", p[0], p[1]);
	
	if(fork())
	{
		char s[20];
		printf("in parent enter data...\n");
		scanf("%s", s);
		write(p[1], s, strlen(s)+1);
	}
	
	else
	{
		char buf[20];
		printf("in child...\n");
		read(p[0], buf, sizeof(buf));
		printf("child proc printing data of parent proc...%s\n", buf);
	}


	return 0;
}


