#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int T;
  scanf("%d",&T);
  getchar();
  for (int t=1;t<=T;t++){
    char string[100000];
    scanf("%[^\n]", string);
    getchar();

    int length = strlen(string);
    int diff=0;
    int seen[26] = {0};
    for (int i=0; i<length; i++){
      char curr=string[i];
      int index = curr-'a';

      if (seen[index] == 0){
        diff++;
        seen[index] = 1;
      }
    }

    if (diff%2==0){
      printf("Case #%d: Yay\n", t);
    }
    else{
      printf("Case #%d: Ewwww\n", t);
    }
  }
}
