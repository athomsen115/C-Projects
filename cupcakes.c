#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCases, n;
  scanf("%d", &testCases);
  for (n=0; n < testCases; n++){
    int cakes;
    scanf("%d", &cakes);
    printf("%d\n", cakes/2 + 1);
  }
  return 0;
}