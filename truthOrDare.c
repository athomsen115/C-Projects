#include <stdio.h>
#include <string.h>

int main(void) {
  int testCases, i, tmp, tr, ts, dr, ds, flag;
  int tra[101], dra[101];
  scanf("%d", &testCases);

  while (testCases--){
    for (i=0; i<101; i++){
      tra[i] = dra[i] = -1;
    }
    flag = 1;
    scanf("%d", &tr);
    for (i=0; i<tr; i++){
      scanf("%d", &tmp);
      tra[tmp]=1;
    }

    scanf("%d", &dr);
    for (i=0; i<dr; i++){
      scanf("%d", &tmp);
      dra[tmp]=1;
    }

    scanf("%d", &ts);
    for (i=0; i<ts; i++){
      scanf("%d", &tmp);
      if (tra[tmp] != 1){
        flag=0;
      }
    }

    scanf("%d", &ds);
    for (i=0; i<ds; i++){
      scanf("%d", &tmp);
      if (dra[tmp] != 1){
        flag=0;
      }
    }
    printf("%s\n", (flag==1)?"yes":"no");
  }
  return 0;
}