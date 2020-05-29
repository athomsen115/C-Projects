#include <stdio.h>

int gcd(int a, int b) {
  int temp;
  while (b != 0) {
    temp = a % b;

    a = b;
    b = temp;
  }
  return a;
}


int main(void) {
  long long n = 1;

  for (long long i = 2; i <= 20; i++) {
    n = n / gcd(n, i) * i;
  }

  printf("Smallest Multiple: %lld\n", n);
  return 0;
}