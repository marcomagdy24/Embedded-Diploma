#include <stdio.h>
int main( )
{
    char CHAR;
    printf("Enter a char to check : ");
    fflush(stdout);
    scanf("%c",&CHAR);
    ((CHAR > 'a' && CHAR < 'z') || (CHAR > 'A' && CHAR < 'Z') )?  printf("%c is an alphabet",CHAR) : printf("%c is not an alphabet",CHAR);
    return 0;
}
