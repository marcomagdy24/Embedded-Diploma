#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,fact=1;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	if (num == 0 || num == 1)
		printf("Factorial = 1");
	else if (num <0)
		printf("[ERROR] Factorial of negative doesn't exist");
	else{
		for (int i = 2;i<=num;i++)
			fact*=i;
		printf("Factorial = %d",fact);
	}
}
