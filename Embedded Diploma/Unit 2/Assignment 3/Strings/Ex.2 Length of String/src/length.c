#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[100];
	int i = 0;
	printf("Enter a String : ");
	fflush(stdout);
	gets(x);
	for (; x[i] != '\0'; i++);
	printf("Length of String = %d",i);
}
