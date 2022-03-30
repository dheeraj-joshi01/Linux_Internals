//using memcmp to compare 2 strings

#include<stdio.h>
#include<string.h>

int main()
{
	char buf1[10];
	char buf2[10];
	int ret;
	
	void * n = memcpy(buf1, "mad", 6);
	printf("%d", (int *)n);
	memcpy(buf2, "madam", 6);
	
	ret = memcmp(buf1, buf2, 5);		//compare the ascii val of buf1 and buf2 respectively
	
	//ret can be either of {-1, 0,1}
	
	if(ret>0)
	{
		printf("buf1 > buf2\n");
	}
	
	else if(ret<0)
	{
		printf("buf2 > buf1\n");
	}
	
	else
	{
		printf("buf2 = buf1\n");
	}
	
	return 0;
	
}
