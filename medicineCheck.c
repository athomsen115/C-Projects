#include <stdio.h>

int isLeap(int x){
  if(x % 100 == 0) {
    if (x % 400 == 0) {
      return 1;
    }else {
      return 0;
    }
  }else{
    if (x % 4 == 0){
      return 1;
    } else{
      return 0;
    }
  }
}

int main(void) {
  int day, month, year, tests;

  printf("Enter number of testcases: ");
  scanf("%d", &tests);
  while(tests--){
    printf("Enter date in yyyy:mm:dd format: ");
    scanf("%d:%d:%d", &year, &month, &day);
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
      printf("%d\n", (31-day)/2+1);
    } else if (month==2){
      if (isLeap(year)){
        printf("%d\n", (29-day)/2+1);
      } else {
        printf("%d\n", (59-day)/2+1);
      }
    } else {
      printf("%d\n", (61-day)/2+1);
    }
  }
  return 0;
}