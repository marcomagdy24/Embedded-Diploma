#include <stdio.h>
#include <stdlib.h>

struct SStudent {
	char name [20];
	float marks;
};

struct SStudent GetInfo (){
	struct SStudent Student ;
	printf("Enter Name : ");fflush(stdout);
	scanf("%s",&Student.name);
	printf("Enter Marks : ");fflush(stdout);
	scanf("%f",&Student.marks);
	return Student;
}

struct SStudent DisplayInfo (struct SStudent Student){
	printf("Name : %s\n",Student.name);fflush(stdout);
	printf("Marks : %.2f\n",Student.marks);fflush(stdout);
	return Student;
}


int main(void) {
	struct SStudent Student[10] ;
	printf("Enter information of Students : \n" );fflush(stdout);
	for (int i = 0 ; i < 10 ; i++){
		printf("For Roll Number %d \n", i+1 );fflush(stdout);
		Student[i] = GetInfo();
	}
	printf("\n\n");fflush(stdout);
	for (int i = 0 ; i < 10 ; i++){
		printf("Info For Roll Number : %d\n", i+1 );fflush(stdout);
		DisplayInfo(Student[i]);
	}
}
