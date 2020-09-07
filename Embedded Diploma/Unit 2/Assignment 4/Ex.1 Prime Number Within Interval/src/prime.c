#include <stdio.h>
#include <stdlib.h>


void prime(int start,int end);

int main(void) {
	int start,end;
	printf("Enter 2 numbers (Intervals) : ");
	fflush(stdout);
	scanf("%d%d",&start,&end);
	prime(start,end);
}

void prime(int start,int end){
	int prime[100];
	int count = 0;
	for (int i = start; i <= end; i++){
		if (i%2 != 0 && i%3 != 0 && i%5 != 0){
			prime[count] = i;
			count++;
		}
	}
	printf("Prime Number between %d	and %d : ",start,end);
	for (int i = 0; i<5;i++){
		if (prime[i] >= end)
			break;
		printf("%d  ",prime[i]);
	}
}
