#include <stdio.h>


int main(void) {
  int top = 1000000;
  long sequenceLength = 0;
  long startingNum = 0;
  long sequence;

  for (int i = 2; i <= top; i++) {
    int length = 1;
    sequence = i;
    while (sequence != 1) {
      if ((sequence % 2) == 0) {
        sequence /= 2;
      } else {
        sequence = (3*sequence) + 1;
      }
      length ++;
    }

    if (sequenceLength < length) {
      sequenceLength = length;
      startingNum = i;
    }
  }
  printf("The starting number of %ld produces a sequence length of %ld\n", startingNum, sequenceLength);
}