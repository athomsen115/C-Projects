#include <stdio.h>


int main(void) {
  int maxProduct = 0;
  for (int i = 999; i >= 100; i--) {
    for (int j = i; j >= 100; j--) {
      int product = i * j;
      if (product < maxProduct) {
        break;
      }
      int number = product;
      int reverse = 0;
      while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
      }
      if (product == reverse && product > maxProduct) {
        maxProduct = product;
      }
    }
  }
  printf("Max Product: %d", maxProduct);
  return 0;
}