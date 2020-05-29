#include <stdio.h>

int main(void) {
  int t, j=1;
  scanf("%d", &t);

  while (j<=t) {
    long int m, n, Rx, Ry, p, x=0, y=0;
    scanf("%ld %ld", &m, &n);
    scanf("%ld %ld", &Rx, &Ry);
    scanf("%ld", &p);

    char str[p];
    scanf("%s", str);
    for(long int i=0; i<p; i++){
      if(str[i]=='U'){
        y++;
      } else if (str[i]=='D'){
        y--;
      } else if (str[i]=='R'){
        x++;
      } else if (str[i]=='L'){
        x--;
      }
    }
    if (x==Rx && y==Ry){
      printf("Case %d: REACHED\n", j);
    } else if (x > m || y > n || x < 0 || y < 0){
      printf("Case %d: DANGER\n", j);
    } else if (x <= m && x != Rx && y < n && y != Ry){
      printf("Case %d: SOMEWHERE\n", j);
    }
    j++;
  }
  return 0;
}