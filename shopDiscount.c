// Code Chef Discount in a Shop Problem
#include <stdio.h>

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  
  while (testCases--) {
    char money[10];
    scanf("%s", money);
    int i, j, flag=1;
    int n=strlen(money);
    for (i=0; i < n-1; i++) {
      if (money[i] > money[i+1]) {
        for (j=i; j < n-1; j++) {
          money[j] = money[j+1];
        }
        money[n-1]=0;
        flag=0;
        break;
      }
    }
    if (flag) {
      money[n-1] = 0;
    }
    printf("%s\n", money);
  }
  return 0;
}