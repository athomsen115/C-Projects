#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 100;
  int sum=0, squares=0, diff;

  //sum of squares
  for (int i = 1; i <= n; i++) {
    sum += (i * i);
  }
  printf("sum of squares: %d\n", sum);

  //square of sums
  for (int i = 1; i <= n; i++) {
    squares += i;
  }

  squares *= squares;
  printf("square of sums: %d\n", squares);

  diff = abs(sum - squares);
  
  printf("Difference: %d\n", diff);
  return 0;
}