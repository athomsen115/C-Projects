#include <stdio.h>

int main(void) {
  int testCases, n, i, flag;
  scanf("%d", &testCases);
  if (testCases >= 1 && testCases <= 1000){
    while(testCases--){
      flag=1;
      scanf("%d", &n);
      char a[n];
      scanf("%s", a);

      for(i=0; i<n; i++){
        if(a[i] == 'I'){
          printf("INDIAN\n");
          flag = 0;
          break;
        } else if (a[i] == 'Y'){
          printf("NOT INDIAN\n");
          flag = 0;
          break;
        }
      }
      if (flag) {
        printf("NOT SURE\n");
        a[0] = '\0';
      }
    }
  }
  return 0;
}