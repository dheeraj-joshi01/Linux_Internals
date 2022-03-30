#include<stdio.h>
#include "atomic.h"

int main()
{
	atomic_t v;		//declare v
	atomic_t u = ATOMIC_INIT(0);		//declare and init u to 0
	
	//using built-in functions from atomic.h
	atomic_set(&v, 4);
	printf("%d\n", atomic_read(&v));
	
	atomic_add(2, &v);
	printf("%d\n", atomic_read(&v));
	
	atomic_inc(&v);
	printf("%d\n", atomic_read(&v));
	
	atomic_sub(1, &v);
	printf("%d\n", atomic_read(&v));
	
	atomic_dec(&v);
	printf("%d\n", atomic_read(&v));

	return 0;
}

