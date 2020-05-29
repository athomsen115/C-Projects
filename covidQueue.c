#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, testCases, n, k=0, p=0;
  scanf("%d", &testCases);
  if (testCases > 100 || testCases < 1){
    exit(0);
  }
  while (testCases--){
    k=1;
    scanf("%d", &n);
    if (n < 1 || n > 100){
      exit(0);
    }
    int a[n];
    for (i=0; i<n; i++){
      scanf("%d", &a[i]);
      if(a[i]>1 || a[i]<0){
        exit(0);
      } else {
        p++;
      }
    }
    if (p==0) {
      exit(0);
    }
    for (i=0; i<n;i++){
      if (a[i]==1){
        for (j=i+1; j<i+6 && j<n; j++){
          if (a[j] == 1){
            k=0;
            break;
          }
        }
      }
    }
    if (k==1){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}