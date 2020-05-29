#include <stdio.h>

int main(void) {
  int testCases, n;
  scanf("%d", &testCases);
  while(testCases--){
    int result = 0;
    scanf("%d", &n);
    int a, b, i;
    for (i=0; i<n; i++){
      scanf("%d %d", &a, &b);
      result += (a-b);
    }
    printf("%d\n", result);
  }
  return 0;
}