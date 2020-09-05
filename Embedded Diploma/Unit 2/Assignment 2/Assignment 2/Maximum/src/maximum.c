#include <stdio.h>
int main( )
{
	float x,y,z;
	printf("Enter 3 numbers : ");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if (x > y && x > z)
		printf("%f is Largest Number", x);
	else if (y > x && y > z)
		printf("%f is Largest Number", y);
	else
		printf("%f is Largest Number", z);
	return 0;
}
