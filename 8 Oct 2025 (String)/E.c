#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int T;
  scanf("%d",&T);
  getchar();
  for (int t=1;t<=T;t++){
    int num;
    char string[1000];
    scanf("%d %s", &num, string);

    for (int i=0; i<num; i++){
      int first, second;

      scanf("%d %d", &first, &second);
      first--;
      second--;

      for (int j=0; j<(second-first+1)/2; j++){
        char temp = string[first+j];
        string[first+j] = string[second-j];
        string[second-j] = temp;
      }
    }
    printf("Case #%d: %s\n", t, string);
  }
  return 0;
}