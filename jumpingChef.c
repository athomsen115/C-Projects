#include <stdio.h>

int main(void) {
  long long int n;
  scanf("%lld", &n);
  int ans = n % 6;
  if (ans == 1 || ans == 3 || ans == 0){
    printf("yes\n");
  } else {
    printf("no\n");
  }
  return 0;
}