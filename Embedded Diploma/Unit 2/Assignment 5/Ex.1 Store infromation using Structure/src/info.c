#include <stdio.h>
#include <stdlib.h>

struct SStudent {
	char name [20];
	int roll;
	float marks;
};

struct SStudent GetInfo (char info[]){
	struct SStudent Student ;
	printf("%s",info);fflush(stdout);
	printf("Enter Name : ");fflush(stdout);
	gets(Student.name);
	printf("Enter Roll Number : ");fflush(stdout);
	scanf("%d",&Student.roll);
	printf("Enter Marks : ");fflush(stdout);
	scanf("%f",&Student.marks);
	return Student;
}

struct SStudent DisplayInfo (struct SStudent Student){
	printf("Name : %s\n",Student.name);fflush(stdout);
	printf("Roll Number : %d\n",Student.roll);fflush(stdout);
	printf("Marks : %.2f\n",Student.marks);fflush(stdout);
	return Student;
}


int main(void) {
	struct SStudent Student ;
	Student = GetInfo("Enter information of Students : \n" );
	DisplayInfo(Student);
}
