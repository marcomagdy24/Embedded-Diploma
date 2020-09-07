//============================================================================
// Name        : sum_2x2_matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float a [2][2];
	float b [2][2];
	float sum [2][2];

	printf("Enter the elements of 1st Matrix\n");
	fflush(stdout);

	for (int i = 0; i <2;i++){
		for (int j = 0; j <2;j++){
			printf("Enter a[%d][%d] : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter the elements of 2nd Matrix\n");

	for (int i = 0; i <2;i++){
		for (int j = 0; j <2;j++){
			printf("Enter b[%d][%d] : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}

	printf("	Sum : \n");

	for (int i = 0; i <2;i++){
		for (int j = 0; j <2;j++){
			sum[i][j] = a[i][j]+b[i][j];
			fflush(stdout);
			printf("	%.2f	",sum[i][j]);
		}
		printf("\n");
	}

}
