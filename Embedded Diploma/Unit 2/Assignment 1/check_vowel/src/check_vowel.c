#include <stdio.h>
int main( )
{
    char CHAR;
    printf("Enter a char to check : ");
    fflush(stdout);
    scanf("%c",&CHAR);
    (CHAR == 'a' || CHAR == 'e' || CHAR == 'i' || CHAR == 'o' || CHAR == 'u' || CHAR == 'A' || CHAR == 'E' || CHAR == 'I' || CHAR == 'O' || CHAR == 'U') ?  printf("%c is Vowel",CHAR) : printf("%c is Constant",CHAR);
    return 0;
}
