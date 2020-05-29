#include <stdio.h>

int main(void) {
  int numDinos, passes, testCases;
  //int a[10];
  scanf("%d", &testCases);

  while (testCases--) {
    scanf("%d %d", &numDinos, &passes);
    for (int i=numDinos-passes; i<numDinos; i++){
      printf("%d", i);
      printf(" ");
    }
    for (int i=1; i<numDinos-passes; i++){
      printf(" %d", i);
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}