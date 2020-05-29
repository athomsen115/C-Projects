#include <stdio.h>

int main(void) {
  int testCases, d, n, i;
  scanf("%d", &testCases);
  while (testCases--){
    scanf("%d %d", &d, &n);
    for(i=1; i<=d; i++){
      n = (n * (n + 1)) / 2;
    }
  printf("%d\n", n);
  }
  return 0;
}