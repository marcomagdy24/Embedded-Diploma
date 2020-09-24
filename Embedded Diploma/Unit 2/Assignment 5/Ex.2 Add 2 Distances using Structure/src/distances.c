#include <stdio.h>
#include <stdlib.h>

struct SDistance {
	float inch;
	int feet;
};

struct SDistance GetInfo (char info[]){
	struct SDistance Distance ;
	printf("%s",info);fflush(stdout);
	printf("Enter feet : ");fflush(stdout);
	scanf("%d",&Distance.feet);
	printf("Enter inch : ");fflush(stdout);
	scanf("%f",&Distance.inch);
	return Distance;
}

struct SDistance AddDistance (struct SDistance A, struct SDistance B){
	struct SDistance Sum ;
	int temp = 0;
	Sum.inch = A.inch + B.inch;
	if (Sum.inch >= 12){
		temp +=  (Sum.inch / 12);
		Sum.inch -= temp * 12;
	}
	Sum.feet = A.feet + B.feet + temp;
	return Sum;

}

struct SDistance DisplayInfo (struct SDistance Distance){
	printf("Feet Number : %d\n",Distance.feet);fflush(stdout);
	printf("inch : %.2f\n",Distance.inch);fflush(stdout);
	return Distance;
}


int main(void) {
	struct SDistance A,B,Sum ;
	A = GetInfo("Enter information of 1st Distance : \n" );
	B = GetInfo("Enter information of 2nd Distance : \n" );
	Sum = AddDistance(A,B);
	DisplayInfo(Sum);
}
