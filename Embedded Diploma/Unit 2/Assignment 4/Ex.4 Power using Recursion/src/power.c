#include <stdio.h>
#include <stdlib.h>


int power (int base,int powerr);

int main(void) {
	int base,powerr;
	printf("Enter base number : ");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number : ");
	fflush(stdout);
	scanf("%d",&powerr);
	printf("%d^%d = %d",base,powerr,power(base,powerr));

}

int power(int base,int powerr){
	if (powerr > 0)
		return base*power(base, powerr-1);
	return 1;
}
