//Code Chef Usain Bolt vs. Tiger Problem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

inline int input(){
  int a = 0;
  char c;
  c=getchar_unlocked();
  while (c<33) {
    c=getchar();
  }
  while (c >=33) {
    a = (a<<3) + (a<<1) + (c-'0');
    c=getchar();
  }
  return a;
}

int main(void) {
  int t, finish, distanceToBolt, tigerAcc, boltSpeed;
  double tigerTime, boltTime, x;
  t = input();

  while(t--) {
    finish = input();
    distanceToBolt = input();
    tigerAcc = input();
    boltSpeed = input();
    
    boltTime = finish/(double)boltSpeed;
    x = ((finish+distanceToBolt)*2)/(double)tigerAcc;
    tigerTime = sqrt(x);

    if (boltTime < tigerTime) {
      printf("Bolt\n");
    } else {
      printf("Tiger\n");
    }
  }
  return 0;
}
