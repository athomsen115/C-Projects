#include <stdio.h>

int main(void) {
  int limit = 1000;
  int product;
  int a=0,b=0,c=0;

  int m=2;
  while (c < limit) {
    for (int n=1; n < m; ++n){
      a = m*m - n*n;
      b = 2 * m * n;
      c = m * m + n * n;

      if (c > limit) break;

      if ((a + b+ c) == 1000) {
        printf("%d %d %d\n", a, b, c);
        product = a*b*c;
      }
    }
    m++;
  }
  printf("Product: %d\n", product);
  return 0;
}