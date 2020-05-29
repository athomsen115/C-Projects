#include <stdio.h>
#include <string.h>

int main(void) {
  int testCases;

  scanf("%d", &testCases);

  while (testCases--){
    int ch[6] = {0};
    int n, j, i;
    char s[1000];
    scanf("%d", &n);
    for (i=0; i<n; i++){
      scanf("%s", s);
      for (j=0; j<strlen(s); j++){
        if (s[j] == 'c'){
          ch[0]++;
          //printf("C: %d\n", ch[0]);
        } else if (s[j] == 'o'){
          ch[1]++;
          //printf("O: %d\n", ch[1]);
        }else if (s[j] == 'd'){
          ch[2]++;
          //printf("D: %d\n", ch[2]);
        } else if (s[j] == 'e'){
          ch[3]++;
          //printf("E: %d\n", ch[3]);
        } else if (s[j] == 'h'){
          ch[4]++;
          //printf("H: %d\n", ch[4]);
        } else if (s[j] == 'f'){
          ch[5]++;
          //printf("F: %d\n", ch[5]);
        }
      }
    }
    ch[0] /= 2;
    //printf("C: %d\n", ch[0]);
    ch[3] /= 2;
    //printf("E: %d\n", ch[3]);
    int min = ch[0];
    for (i=1; i<6; i++){
      if (ch[i]<min){
        min=ch[i];
      }
    }
    printf("%d\n", min);
  }
  return 0;
}