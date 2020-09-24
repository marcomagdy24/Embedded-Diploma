#include <stdio.h>
#include <stdlib.h>

struct SComplex {
	double m_R;
	double m_I;
};


struct SComplex ReadComplex (char name[]){
	struct SComplex SData;
	printf("Enter %s (Ex : 5, -3): ",name);fflush(stdout);
	scanf("%lf, %lf",&SData.m_R,&SData.m_I);
	return SData;
}


struct SComplex AddComplex (struct SComplex A,struct SComplex B){
	struct SComplex C;
	C.m_I = A.m_I + B.m_I;
	C.m_R = A.m_R + B.m_R;
	return C;
}


void PrintComplex (char name[], struct SComplex C){
	printf("Complex %s : (%.2lf) + j (%.2lf)", name,C.m_R,C.m_I);
	fflush(stdout);
}


int main(void) {
	struct SComplex X,Y,z;
	X = ReadComplex("First Complex");
	Y = ReadComplex("Second Complex");
	z = AddComplex(X,Y);
	PrintComplex("Z",z);
}
