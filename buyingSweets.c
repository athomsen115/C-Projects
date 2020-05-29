#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  while(testCases--){
    int n, x, *a, i, sum=0, r;
    long long int min=100000000;
    scanf("%d %d", &n, &x);
    a = (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
      scanf("%d", &a[i]);
      sum += a[i];
      if (a[i] < min){
        min = a[i];
      }
    }
    r = sum % x;
    if (r < min){
      printf("%d\n", sum/x);
    } else {
      printf("-1\n");
    }
  }
  return 0;
}