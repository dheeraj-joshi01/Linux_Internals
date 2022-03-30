#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stud
{
	int rno;
	char name[20], gender;
	float height;
}s1;		//struct declaration


int main()
{
	struct stud s2;
	struct stud s3 = {103, "hari prasad", 'M', 5.11 };		//declaring & initializing struct
		
	printf("\n Roll\tName\t\t\t\t\t\tGender\tHeight\n");
	
	s1.rno = 101;
	strcpy(s1.name, "chulbul pandey");
	s1.gender = 'M';
	s1.height = 5.5;
	
	printf("\n %3d\t%-40s\t%c\t%1.2f\n", s1.rno, s1.name, s1.gender, s1.height);
	printf("\n %3d\t%-40s\t%c\t%1.2f\n", s3.rno, s3.name, s3.gender, s3.height);

	
	return 0;
	
}
