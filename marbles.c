#include <stdio.h>
#define min(a,b) (a>b ? b: a)

int main(void) {
  int testCases, n, k, i, div, mul;
  unsigned long long int ans;
  scanf("%d", &testCases);
  while (testCases--){
    scanf("%d %d", &n, &k);
    ans = 1LL;
    if (n<k) {
      ans = 0;
    } else if (n == k){
      ans = 1;
    } else{
      n = n - 1;
      k = k - 1;
      k = min((n-k), k);
      div = 1;
      mul = n;
      while (div <= k){
        ans = (ans * mul--)/(div++);
      }
    }
    printf("%llu\n", ans);
  }
  return 0;
}