#include <stdio.h>

int main(void) {
  int testCases, n, k, coin, i;
  scanf("%d", &testCases);
  while (testCases--){
    coin = 0;
    scanf("%d %d", &n, &k);
    for (i=2; i<=k; i++){
      if (coin < n % i){
        coin = n % i;
      }
    }
    printf("%d\n", coin);
  }
  return 0;
}