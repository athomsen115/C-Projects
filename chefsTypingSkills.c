#include <stdio.h>
#include <string.h>

int main(void) {
  int testCases;
  scanf("%d", &testCases);
  while (testCases > 0){
    int words, len, count=0, sum=0;
    scanf("%d", &words);
    char ch[words][22];
    for (int i=0; i<words; i++){
      scanf("%s", ch[i]);
      len = strlen(ch[i]);
      count = 2;
      for (int j=1; j<len; j++){
        if (ch[i][j] == 'd' || ch[i][j] =='f') {
          if (ch[i][j-1]=='d' || ch[i][j-1]=='f'){
            count += 4;
          } else if(ch[i][j-1]=='j' || ch[i][j-1]=='k'){
            count += 2;
          }
        } else if (ch[i][j]=='j' || ch[i][j]=='k') {
          if (ch[i][j-1]=='j' || ch[i][j-1]=='k'){
            count += 4;
          } else if(ch[i][j-1]=='d' || ch[i][j-1]=='f'){
            count += 2;
          }
        }
      }
      for (int a=0; a<i; a++){
        if (strcmp(ch[a], ch[i]) == 0){
          count /= 2;
        }
      }
      sum += count;
    }
    printf("%d", sum);
    testCases--;
  }
  return 0;
}