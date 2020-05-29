#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
  if (b == 0){
    return a;
  }
  return gcd(b, a%b);
}

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  while (testCases--){
    int a, b, d, m, o;
    int n, c, x, y, z;

    scanf("%d %d %d %d %d", &n, &c, &x, &y, &z);
    if (c==1){
      if ((x<y && y<z) || (x>y && y>z)){
        a = (2*n+1)-z;
        b = 2*n+1;
        d = gcd(a, b);
        m = a/d;
        o = b/d;
        printf("%d %d\n", m, o);
      }
      if (x==z){
        a = x;
        b= 2*n+1;
        d = gcd(a, b);
        m = a/d;
        o = b/d;
        printf("%d %d\n", m, o);
      }
    }
    if (c==2 || c==4){
      a = (2*n+1)- (2*y);
      b= 2*n+1;
      d = gcd(a, b);
      m = a/d;
      o = b/d;
      printf("%d %d\n", m, o);
    }
    if (c==3){
      if (x==z){
        a = x;
        b= 2*n+1;
        d = gcd(a, b);
        m = a/d;
        o = b/d;
        printf("%d %d\n", m, o);
      }
      if ((x<y && y<z) || (x>y && y>z)) {
        a = (2*n+1) - x;
        b= 2*n+1;
        d = gcd(a, b);
        m = a/d;
        o = b/d;
        printf("%d %d\n", m, o);        
      }
    }
  }
  return 0;
}