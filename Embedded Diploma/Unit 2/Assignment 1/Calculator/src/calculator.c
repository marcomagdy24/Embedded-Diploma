#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2;
	char op;
	printf("Enter an operand : ");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter 2 numbers : ");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	switch (op){
	case ('+'):
		printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
		break;
	case ('-'):
		printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
		break;
	case ('*'):
		printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
		break;
	case ('/'):
		printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
		break;
	default:
		printf("[ERROR] Wrong Operand");
		break;

	}
}
