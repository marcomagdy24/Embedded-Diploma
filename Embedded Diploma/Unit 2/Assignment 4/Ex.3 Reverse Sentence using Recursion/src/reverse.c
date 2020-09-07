#include <stdio.h>
#include <stdlib.h>

void reverse_sentence ();

int main(void) {
	printf("Enter a Sentence : ");
	fflush(stdout);
	reverse_sentence();
}


void reverse_sentence (){
	char c;
	scanf("%c",&c);
	if (c != '\n'){
		reverse_sentence();
		printf("%c",c);
	}
}
