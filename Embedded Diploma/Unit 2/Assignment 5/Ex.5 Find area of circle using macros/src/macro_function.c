#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1415
#define area(r) Pi*r*r


int main(void) {
	int radius ;
	printf("Enter the radius : ");fflush(stdout);
	scanf("%d",&radius);

	printf("Area = %.2f", area(radius));
}
