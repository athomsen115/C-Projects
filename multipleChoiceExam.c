#include <stdio.h>

int main(void) {
  int a, i, n, testCases;
  char s[102], u[102];

  scanf("%d", &testCases);
  while (testCases--){
    a=0;
    scanf("%d", &n);
    scanf("%s", s);
    scanf("%s", u);
    
    for (i=0; i<n; i++){
      if (u[i]=='N'){
        continue;
      } else if (s[i] != u[i]){
        i++;
      } else {
        a++;
      }
    }
    printf("%d\n", a);
  }
  return 0;
}