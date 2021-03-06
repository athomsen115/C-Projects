#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);

  while (t--) {
    long long n;
    int r;

    scanf("%lld", &n);

    if(n<=4){
      printf("%lld\n", n/2);
      continue;
    }

    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n |= n >> 32;
    n++;

    r = n % 10;
    if (r == 4) {
      printf("9\n");
    } else if (r==8){
      printf("2\n");
    } else if (r==6){
      printf("3\n");
    }else{
      printf("0\n");
    }
  }
  return 0;
}