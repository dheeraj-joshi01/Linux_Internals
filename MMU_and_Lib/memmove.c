//using memmove to copy data from src to dest

#include<stdio.h>
#include<string.h>

int main()
{
	const char src[] = "This is new data";
	char dest[] = "This is old data";
	int ret;
	
	printf("\nbefore memmove \ndest = %s\nsrc = %s\n", dest, src);
	
	memmove(dest, src, 16);
	
	printf("\nafter memmove \ndest = %s\nsrc = %s\n", dest, src);
	
	return 0;
	
}
