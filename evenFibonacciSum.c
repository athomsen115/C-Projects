#include <stdio.h>

#define TOP 4000000

int main(void) {
  int prev0 = 0;
  int prev1 = 1;
  int current = 1;
  int total = 0;

  while (current < TOP) {
    current = prev0 + prev1;
    
    if (current % 2 == 0) {
      total += current;
    }
    //printf("%d\n", current);
    prev0 = prev1;
    prev1 = current;
  }
  printf("Total: %d\n", total);
  return 0;
}