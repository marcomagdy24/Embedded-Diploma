#include <stdio.h>
int main( )
{
    float num1, num2;
    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%f %f",&num1,&num2);
    printf("Product: %f",num1*num2);
    return 0;
}
