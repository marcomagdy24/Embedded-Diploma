#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

union job {
	char name[30];
	float salary;
	int no;
}u;

struct job1 {
	char name[30];
	float salary;
	int no;
}s;

union job2 {
	char name[32];
	float salary;
	int no;
}u1;

struct job3 {
	char name[32];
	float salary;
	int no;
}s1;


int main(void) {
	printf("Size of Union = %d\n",sizeof(u));
	printf("Size of Structure = %d\n",sizeof(s));
	printf("Size of Union = %d\n",sizeof(u1));
	printf("Size of Structure = %d\n",sizeof(s));
}
