#include <stdio.h>

int main(void) {
  int testCases, c;
  scanf("%d", &testCases);
  for (c=1; c <= testCases; c++){
    printf("Case %d:\n", c);
    int m, n, x, i, j, k;
    scanf("%d %d %d", &m, &n, &x);
    int a[m][n], col[n], count[n];
    
    for (i=0; i<m; i++) {
      for (j=0; j<n; j++) {
        scanf("%d", &a[i][j]);
      }
    }

    for (i=0; i<n; i++){
      col[i] = a[0][i];
      count[i] = 1;
      for (j=1; j < x; j++) {
        if (a[j][i] > col[i]) {
          col[i] = a[j][i];
          count[i] = 1;
        } else if (a[j][i] == col[i]) {
          count[i]++;
        }
      }
    }
    
    int max[n-x+1], countMax[n-x+1];

    for (i=0; i<m-x+1; i++){
      max[0] = col[0];
      countMax[0] = count[0];
      for (k=1; k<x; k++){
        if (col[k] > max[0]) {
          max[0] = col[k];
          countMax[0] = count[k];
        } else if (col[k] == max[0]){
          countMax[0] += count[k];
        }
      }

      (countMax[0] == 1) ? printf("%d ", max[0]) : printf("%d(%d)", max[0], countMax[0]);

      for (j=1; j < n-x+1; j++){
        if(max[j-1] != col[j-1]) {
          if (col[j+x-1] > max[j-1]) {
            max[j] = col[j+x-1];
            countMax[j] = count[j+x-1];
          }else if (col[j+x-1] < max[j-1]) {
            max[j] = max[j-1];
            countMax[j] = countMax[j-1];
          }else {
            max[j] = max[j-1];
            countMax[j] = countMax[j-1] + count[j+x-1];
          }
        } else if (countMax[j-1] != count[j-1]) {
          if (col[j+x-1] > max[j-1]) {
            max[j] = col[j+x+1];
            countMax[j] = count[j+x-1];
          } else if (col[j+x-1] < max[j-1]) {
            max[j] = max[j-1];
            countMax[j] = countMax[j-1]-count[j-1];
          }else {
            max[j] = max[j-1];
            countMax[j] = countMax[j-1] + count[j+x-1] - count[j-1];
          }
        } else {
          max[j] = col[j];
          countMax[j] = count[j];
          for (k=1; k < x; k++){
            if (col[j+k] > max[j]) {
              max[j] = col[j+k];
              countMax[j] = count[j+k];
            } else if (col[j+k]==max[j]) {
              countMax[j] += count[j+k];
            }
          }
        }
        (countMax[j] == 1) ? printf("%d ", max[j]) : printf("%d(%d)", max[j], countMax[j]);
      }
      printf("\n");

      if (i != m-x){
        for (j=0; j<n; j++){
          if (col[j] != a[i][j]){
            if (a[i+x][j] > col[j]){
              col[j] = a[i+x][j];
              count[j] = 1;
            } else if (a[i+x][j] == col[j]) {
              count[j]++;
            }
          } else if (count[j] != 1) {
            if (a[i+x][j] > col[j]) {
              col[j] = a[i+x][j];
              count[j] = 1;
            } else if (a[i+x][j] < col[j]) {
              count[j]--;
            }
          } else {
            for (k=i+2; k <= i+x; k++){
              if (a[k][j] > col[j]) {
                col[j] = a[k][j];
                count[j] = 1;
              } else if (a[k][j] == col[j]) {
                count[j]++;
              }
            }
          }
        }
      }
    }
    printf("\n");
  }
  return 0;
}