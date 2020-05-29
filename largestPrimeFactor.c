#include <stdio.h>
#include <math.h>

int main(void) {
  long n = 600851475143;
  int i, max = -1;
  
  while (n % 2 == 0) {
    max = 2;
    n = n/2;
  }

  for (i = 3; i <= sqrt(n); i=i+2) {
    while (n % i == 0) {
      max = i;
      n = n/i;
    }
  }

  if (n > 2) {
    max = n;
  }

  printf("Max Prime Factor: %ld\n", n);
  return 0;
}