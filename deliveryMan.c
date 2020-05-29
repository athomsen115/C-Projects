#include <stdio.h>
#include <stdlib.h>

struct pair{
  int a;
  int b;
  int sum;
};

int cmpfunc(const void *a, const void *b) {
  struct pair*ia = (struct pair*)a;
  struct pair*ib = (struct pair*)b;
  return(ib->sum-ia->sum);
}

int main(void) {
  int n, x, y, sum=0;
  scanf("%d %d %d", &n, &x, &y);
  struct pair p[n];

  for (int i=0; i<n; i++){
    scanf("%d", &p[i].a);
  }

  for (int i=0; i<n; i++){
    scanf("%d", &p[i].b);
    p[i].sum = abs(p[i].a - p[i].b);
  }

  qsort(p, n, sizeof(struct pair), cmpfunc);

  for (int i=0; i<n; i++){
    if(p[i].a > p[i].b){
      if (x > 0){
        sum += p[i].a;
        x--;
      } else {
        sum += p[i].b;
        y--;
      }
    } else {
      if (y > 0){
        sum += p[i].b;
        y--;
      } else {
        sum += p[i].a;
        x--;
      }
    }
  }
  printf("%d\n", sum);
  return 0;
}