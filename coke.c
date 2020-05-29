#include <stdio.h>

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  while (testCases--){
    int n, m, k, l, r;
    long long int price=0;

    scanf("%d %d %d %d %d", &n, &m, &k, &l, &r);
    for (int i=1; i< n; i++){
      int c;
      long long int p;
      scanf("%d %lld", &c, &p);
      if (c> k+1) {
        c = c-m;
        if (c<k){
          c=k;
        }
      } else if (c < k-1){
        c = c+m;
        if (c>k){
          c=k;
        }
      } else {
        c=k;
      }
      if ((l<=c) && (c<=r)){
        if(price==0){
          price=p;
        } else if (price > p){
          price=p;
        }
      }
    }
    if(price != 0){
      printf("%lld\n", price);
    } else {
      printf("%d\n", (-1));
    }
  }
  return 0;
}