#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c",&c);
    printf("ASCII value of %c = %d",c,c);
    return 0;
}
