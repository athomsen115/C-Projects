#include <stdio.h>

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  while(testCases--){
    int n;
    scanf("%d", &n);
    int a[n], i, c[1001], d[1001], j, flag=0;
    for (i=0; i<=1000; i++){
      c[i] = 0;
      d[i] = 0;
    }
    for (i=0; i<n; i++){
      scanf("%d", &a[i]);
    }
    c[a[0]] = 1;
    for (i=1; i<n; i++){
      if (a[i] != a[i-1]){
        if(c[a[i]]==0){
          if (d[c[a[i-1]]] == 0){
            d[c[a[i-1]]] = 1;
          } else {
            flag = 1;
            c[a[i]]++;
          }
        }else {
          flag = 1;
        }
      } else {
        c[a[i]]++;
      }
      if (flag==1){
        break;
      }
    }

    if (flag == 1){
      printf("NO\n");
    } else{
      printf("YES\n");
    }
  }
  return 0;
}