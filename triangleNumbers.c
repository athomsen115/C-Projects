#include <stdio.h>
#include <math.h>

#define goalNum 500

int numDivisors(int number) {
  int numD = 0;
  
  for (int i =1; i <= sqrt(number); i++){
    if (number % i == 0) {
      numD += 2;
    }
  } 
  if (sqrt(number) * sqrt(number) == number) {
    numD--;
  }
  return numD;
}

int main(void) {
  int number = 0;
  int i = 1;

  while (numDivisors(number) < goalNum){
    number += i;
    i++;
  } 

  printf("First Triangle Number is: %d\n", number);
  return 0;
}