#include <stdio.h>
int main( )
{
    int num;
    printf("Enter a number to check : ");
    fflush(stdout);
    scanf("%d",&num);
    (num % 2) ?  printf("%d is Odd",num) : printf("%d is Even",num);
    return 0;
}
