#include <stdio.h>

int gcd(int a, int b){
  int temp;
  while (b != 0){
    temp = a % b;

    a = b;
    b = temp;
  }
  return a;
}

void test(){
  int meliodas, ban;
  scanf ("%d %d", &meliodas, &ban);
  printf("%d\n", gcd(meliodas, ban) * 2);
}

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  while(testCases --){
    test();
  }
  return 0;
}