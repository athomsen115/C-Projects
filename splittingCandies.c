#include <stdio.h>

int main(void) {
  int testCases;
  long long int n, k;
  scanf("%d", &testCases);
  while (testCases--){
    scanf("%lld", &n);
    scanf("%lld", &k);
    if (n == 0){
      printf("0 0\n");
    } else if (k == 0 && n != 0){
      printf("0 %lld\n", n);
    } else {
      printf("%lld %lld\n", n/k, n%k);
    }
  }
  return 0;
}