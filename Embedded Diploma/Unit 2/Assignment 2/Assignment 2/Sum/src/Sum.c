#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,sum=0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num);
	for (int i = 0;i<=num;i++)
		sum+=i;
	printf("Sum = %d",sum);

}
