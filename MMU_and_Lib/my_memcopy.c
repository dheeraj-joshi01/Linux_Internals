//making user defined memcopy function

#include<stdio.h>
#include<string.h>

void * my_memcopy(char *, char *, size_t);			//func declaration


int main()
{
	char src[] = "This is new data";
	char dest[] = "This is old data";			//dest[] will get overwritten
	char *ret;
	
	printf("\nbefore memmove \ndest = %s\nsrc = %s\n", dest, src);
	
	my_memcopy(src, dest, 16);			//calling the usr def function
	
	printf("\nafter memmove \ndest = %s\nsrc = %s\n", dest, src);
	
	return 0;
	
}

void *my_memcopy(char *src, char *dest, size_t n)		//function defination
{
	for(int i =0; i<n;i++)
	{
		dest[i] = src[i];
		
		/* another method */
		
		/*
			*dest = *src;
			//dest++;
			//src++;
		*/
	}
}
