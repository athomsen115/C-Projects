#include <stdio.h>
#include <math.h>

int main(void) {
  int power = 15;
  int result = 0;
  long long int number = pow(2, power);

  while (number > 0) {
    result += (int)(number % 10);
    number /= 10;
  }
  
  printf("Sum of the Digits is: %d\n", result);
  return 0;
}