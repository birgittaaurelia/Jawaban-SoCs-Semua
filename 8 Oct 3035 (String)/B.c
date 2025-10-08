#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int T;
  scanf("%d",&T);
  getchar();
  for (int t=1;t<=T;t++){
    char string[500];
    scanf("%[^\n]", string);
    getchar();
    bool is_Pal = true;

    int len = strlen(string);
    for (int i=0; i<len/2; i++){
      if (string[i] != string[len-1-i]){
        is_Pal = false;
        break;
      }
    }
    if (is_Pal){
      printf("Case #%d: Yay, it's a palindrome\n", t);
    }
    else{
        printf("Case #%d: Nah, it's not a palindrome\n", t);
    }
  }
  return 0;
}