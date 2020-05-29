#include <stdio.h>

int inPos() {
  int n = 0;
  register char ch = getchar_unlocked();

  while (ch < '0' || ch > '9') {
    ch = getchar_unlocked();
  }
  while (ch >= '0' && ch <= '9') {
    n = (n << 3) + (n << 1) + (ch - '0');
    ch = getchar_unlocked();
  }
  return n;
}

int a[10000005];

int main(void) {
  int n, k, x, min, max, i, c=0;
  n = inPos();
  k = inPos();
  min = 10000001;
  max = 0;

  for (i=0; i<n; i++){
    x = inPos();
    a[x] = 1;
    if (x < min) {
      min = x;
    }
    if (x > max){
      max = x;
    }
  }
  while (min <= max){
    if (a[min] == 1){
      min += k;
      c++;
    } else {
      min++;
    }
  }
  printf("%d\n", c);
  return 0;
}