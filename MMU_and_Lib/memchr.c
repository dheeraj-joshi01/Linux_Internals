//using memchr to scan 'n' characters to find 'ch'

#include<stdio.h>
#include<string.h>

int main()
{
	const char str[] = "linuxkernel.com";
	const char ch = '.';
	char *ret;		//interior ptr
	
	printf("string before scan is %s \n", str);
	
	ret = memchr(str, ch, strlen(str));		//scan the str	--->> if found -- returns interior add of 1st 'ch'	--->> else returns NULL
	
	printf("string after '%c' is -> %s \n", ch, ret+1);
	//printf("string after '%c' is -> %s \n", ch, ret-6);			//act as lseek
	
	
	return 0;
	
}
