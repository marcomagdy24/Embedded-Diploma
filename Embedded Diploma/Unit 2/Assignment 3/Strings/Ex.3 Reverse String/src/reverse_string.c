#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[100];
	int length;
	printf("Enter a String : ");
	fflush(stdout);
	gets(x);
	length = strlen(x) - 1;
	printf("Reverse of String : ");
	fflush(stdout);
	for (int i = length;i>=0;i--)
		printf("%c",x[i]);
}
