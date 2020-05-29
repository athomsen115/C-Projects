#include <stdio.h>
#define A 100000
#define MD 1000000007
#define N 20

int calc[A + 1];

void init(){
  int a, b;
  calc[1] = 1;
  for (a=2; a <= A; a++){
    if (calc[a] != 0) {
      continue;
    }
    for (b=a; b <= A; b += a){
      calc[b]++;
    }
  }

  for (a=2; a*a <= A; a++) {
    if (calc[a] != 1){
      continue;
    }
    for (b=a*a; b <= A; b += a*a){
      calc[b] = 0;
    }
  }

  for (a=2; a <= A; a++) {
    if (calc[a] != 0){
      calc[a] = calc[a] % 2 == 0 ? 1:-1;
    }
  }  
}


int main(void) {
  
  static int xx[N][A + 1], yy[A + 1];
  int n, m, i, j, a, b, sum;

  init();
  scanf("%d %d", &n, &m);
  for (i=0; i < n; i++){
    for (j=0; j < m; j++){
      scanf("%d", &a);
      xx[i][a]++;
    }
    for (a=1; a <= A; a++){
      for (b= a+a; b <= A; b += a){
        xx[i][a] += xx[i][b];
      }
    }
  }

  for (a=1; a <= A; a++){
    long long y=1;

    for (i=0; i < n; i++){
      y = y * (xx[i][a] + 1) % MD;
    }
    for (i=0; i<n; i++){
      y = (y - xx[i][a]) % MD;
    }
    y--;
    yy[a] = y;
  }
  sum = 0;
  for (a=1; a <= A; a++){
    long long y = 0;
    for (b=a; b <= A; b+=a) {
      y = (y + calc[b/a] * yy[b]) % MD;
    }
    sum = (sum + y * a) % MD;
  }
  if (sum < 0){
    sum += MD;
  }
  printf("%d\n", sum);
  return 0;
}