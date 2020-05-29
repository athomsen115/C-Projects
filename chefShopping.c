#include <stdio.h>
#include <stdlib.h>

int max(a, b){
  if (a>b){
    return a;
  } else{
    return b;
  }
}

int knapsack(int k, int cost[], int weight[], int n){
  if (n==0 || k==0){
    return 0;
  }
  if (cost[n-1] > k){
    return knapsack(k, cost, weight, n-1);
  } else{
    return max(weight[n-1] + knapsack(k-cost[n-1], cost, weight, n-1), knapsack(k, cost, weight, n-1));
  }
}

int main(void) {
  int testCases, n, i;
  long k, cost[10], weight[10];
  scanf("%d", &testCases);
  while (testCases--){
    scanf("%d %ld", &n, &k);
    for (i=0; i<n; i++){
      scanf("%ld %ld", &cost[i], &weight[i]);
    }
    printf("%d\n", knapsack(k, cost, weight, n));
  }
  return 0;
}