#include <stdio.h>
int main(){
      float a, b;
      printf("Enter value of a : ");
      fflush(stdout);
      scanf("%f",&a);
      printf("Enter value of b : ");
      fflush(stdout);
      scanf("%f",&b);
      a = a - b;
      b = a + b;
      a = b - a;
      printf("After swapping, value of a = %.2f\n", a);
      printf("After swapping, value of b = %.2f", b);
      return 0;
}
