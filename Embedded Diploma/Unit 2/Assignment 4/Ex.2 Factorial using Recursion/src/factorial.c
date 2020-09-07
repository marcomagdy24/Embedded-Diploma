#include <stdio.h>
#include <stdlib.h>

int fact (int x);

int main(void) {
	int x ;
	printf("Enter positive integer : ");
	fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of number = %d",fact(x));

}

int fact (int x)
{
	if (!x)
		return 1;
	if (x != 1)
		return x*fact(x-1);
	return 1;
}
