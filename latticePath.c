#include <stdio.h>

int main(void) {
  int gridSize = 20;
  long paths = 1;

  for (int i = 0; i < gridSize; i++){
    paths *= (2*gridSize) - i;
    paths /= i + 1;
  }

  printf("Total paths: %ld\n", paths);
  return 0;
}