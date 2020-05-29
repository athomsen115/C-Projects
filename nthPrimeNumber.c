#include <stdio.h>
#define MAX 10001

int isPrime(long long int number) {
  for (int i = 2; i*i <= number; i++){
    if (number % i == 0) return 0;
  }
  return 1;
}

int nthPrime(int n){
  int counter = 0;
  if (n == 1) return 2;

  for (int i = 3; ; i += 2){
    if (isPrime(i)) {
      counter++;
      if (counter == (n-1)) return i;
    }
  }
  return 0;
}

int main(void) {

  printf("%d\n", nthPrime(MAX));
  return 0;
}