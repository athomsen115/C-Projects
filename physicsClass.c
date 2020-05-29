#include <stdio.h>
#include <stdlib.h>

int height[10010];

int comp(const void *a, const void *b) {
  int f =* ((int*)a);
  int s =* ((int*)b);
  return f - s;
}

int main(void) {
  int testCases, i, n, f, z, y, x;
  scanf("%d", &testCases);

  while (testCases--){
    long long int ans = 0;
    scanf("%d %d", &n, &f);

    for (i=0; i < n; i++){
      scanf("%d", &z);
      while (z%f == 0){
        z /= f;
      }
      height[i] = z;
    }

    qsort(height, n, sizeof(int), comp);
    y = height[0]; x = 1;
    for (i=1; i < n; i++){
      if (height[i] != y){
        y = height[i];
        x = 0;
      }
      ans += x;
      x++;
    }
    printf("%lld\n", ans);
  }
  return 0;
}