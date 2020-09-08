#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[100], letter;
	int count = 0;
	printf("Enter a String : ");
	fflush(stdout);
	gets(x);
	printf("Enter a character to find frequency : ");
	fflush(stdout);
	scanf("%c",&letter);
	for (int i = 0; x[i] != '\0'; i++){
		if (x[i] == letter)
			count++;
	}
	printf("Frequency of %c = %d",letter,count);
}
