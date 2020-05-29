// Project Euler Problem 10 Summation of Primes
#include <stdio.h>
#include <math.h>

# define TOP 2000000
int primes(int num);

int main(void) {
  int i;
  long sum = 0;

  for (i = 2; i < TOP; i++) {
    if (primes(i) == 1) {
      sum += i;
    }
  }
  printf("Sum: %ld\n", sum);
  return 0;
}

int primes(int num) {
  int i;

  for (i=2; i <= (sqrt(num)); i++) {
    if (num % i == 0) {
      return 0;
    }else {
      ;
    }
  }
  return 1;
}