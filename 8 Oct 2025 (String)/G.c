#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int T;
  scanf("%d",&T);
  for (int t=1;t<=T;t++){
    int len;
    scanf("%d", &len);
    getchar();

    char string[101];
    scanf("%[^\n]", string);

    char newString[101];
    int pointer = 0;

    for (int i=0; i<len; i++){
      if (isalpha(string[i])){
        newString[pointer] = string[i];
        pointer++;
      }
    }
    newString[pointer] = '\0';
    printf("Case #%d: %s\n", t, newString);
  }
  return 0;
}