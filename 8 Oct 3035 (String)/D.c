#include <stdio.h>
#include <string.h>

int main(){
  int T;
  scanf("%d",&T);
  getchar();
  for (int t=1;t<=T;t++){
    char string[1000];
    scanf("%[^\n]", &string);

    int len = strlen(string);
    for (int i=0; i<len/2; i++){
      char temp = string[i];
      string[i] = string[len-1-i];
      string[len-1-i] = temp;
    }
    printf("Case #%d : %s\n", t, string);
    getchar();
  }
  return 0;
}