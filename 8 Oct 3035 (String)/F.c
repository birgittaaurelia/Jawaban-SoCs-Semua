#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int T;
  scanf("%d",&T);
  for (int t=1;t<=T;t++){
    char string[1000];
    scanf("%s", string);
    int len = strlen(string);

    int change;
    scanf("%d", &change);
    getchar();

    for (int i=0; i<change; i++){
      char bef, aft;
      scanf("%c %c", &bef, &aft);
      getchar();
      
      for (int j=0; j<len; j++){
        if (string[j]==bef){
          string[j] = aft;
        }
      }
    }
    printf("Case #%d: %s\n", t, string);
  }
  return 0;
}