//using memset to manipulate memory 

#include<stdio.h>
#include<string.h>

int main()
{
	const char str[] = "linuxkernel.com";
	const char ch = '#';
	
	printf("string before set/ initializations is %s \n", str);
	
	memset(str, ch, 5);		//set memory
	
	printf("string after set is %s \n", str);
	
	
	return 0;
	
}
