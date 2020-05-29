#include <stdio.h>

int min(int a, int b){
  if (a<b){
    return a;
  }
  return b;
}

int max(int a, int b){
  if (a>b){
    return a;
  }
  return b;
}

int main(void) {
  int testCases;
  scanf("%d", &testCases);

  for (int i=0; i<testCases; i++){
    int a, b, c, d;
    scanf("%d %d", &c, &d);
    a = min(c, d);
    b = max(c, d);

    int temp, moves=0;
    if (a==0 && b == 0){
      printf("0\n");
      continue;
    }
    if (a == 0){
      printf("-1\n");
      continue;
    }
    if (a==b){
      printf("%d\n", b);
      continue;
    }
    if (a*2 < b){
      while (a*2<b){
        a *= 2;
        moves++;
      }
      printf("%d\n", (b+1+moves));
    } else{
      printf("%d\n", (b+1));
    }
  }
  return 0;
}