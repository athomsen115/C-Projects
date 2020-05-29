#include <stdio.h>
#include <stdlib.h>

int comparison(const void *n1, const void *n2){
  long num1 = *(long*)n1;
  long num2 = *(long*)n2;
  if (num1 < num2){
    return 1;
  } else{
    return -1;
  }
}

int main(void) {
  int testCases, i, j, k, w, c, n1, n2, totalWeight=0, currentWeight=1;
  long c1[100011], c2[100011], result, temp1, temp2;

  scanf("%d", &testCases);

  for (i=0, n1=0, n2=0; i<testCases; ++i){
    scanf("%d %d", &w, &c);
    if (w==1) {
      c1[n1++] = c;
    } else if (w==2){
      c2[n2++] = c;
    }
    totalWeight += w;
  }
  if (n1 > 0){
    qsort(c1, n1, sizeof(long), comparison);
    result = c1[0];
    printf("\n%ld ", result);
    j = currentWeight = 1;
  } else {
    printf("0 ");
    j = currentWeight = 0;
  }
  if (n2 > 0){
    qsort(c2, n2, sizeof(long), comparison);
  }

  for (i=2, k=0; i<=totalWeight; ++i){
    if (j == n1){
      if (i - currentWeight == 2){
        result += c2[k++];
        currentWeight = i;
      } else if (n1 > 0){
        if (c1[j-1] < c2[k]){
          result = result - c1[--j] + c2[k++];
          currentWeight = i;
        }
      }
    } else if (k == n2) {
      result += c1[j++];
    } else {
      if (j - 1 >= 0){
        temp1 = c1[j] + c1[j-1];
        temp2 = c2[k];
        if (temp1 > temp2){
          result += c1[j++];
        } else{
          result = result - c1[--j] + c2[k++];
        }
      } else {
        result += c1[j++];
      }
      currentWeight = i;
    }
    printf("%ld ", result);
  }
}