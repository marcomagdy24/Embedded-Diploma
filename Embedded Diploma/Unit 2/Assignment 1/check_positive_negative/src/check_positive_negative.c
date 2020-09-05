#include <stdio.h>
int main( )
{
	float x;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%f",&x);
	if (x > 0)
		printf("%.2f is Positive", x);
	else if (x < 0)
		printf("%.2f is Negative", x);
	else
		printf("you entered Zero");
	return 0;
}
