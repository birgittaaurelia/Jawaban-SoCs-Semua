#include <stdio.h>
#include <string.h>

int main(){
  int T;
  scanf("%d",&T);
  getchar();
  for (int t=1;t<=T;t++){
    char string[1000];
    char A[6] = "ABCD";
    char E[6] = "EFGH";
    char I[6] = "IJKLMN";
    char O[6] = "OPQRST";
    char U[6] = "UVWXYZ";

    scanf("%[^\n]", string);
    int len = strlen(string);
    int encrypt[len];
    for (int i=0; i<len; i++){
      for (int j=0; j<6; j++){
        if (string[i] == A[j]) {
          string[i]='A';
          encrypt[i]=j;
          break;
        }
        else if (string[i] == E[j]) {
          string[i]='E';
          encrypt[i]=j;
          break;
        }
        else if (string[i] == I[j]) {
          string[i]='I';
          encrypt[i]=j;
          break;
        }
        else if (string[i] == O[j]) {
          string[i]='O';
          encrypt[i]=j;
          break;
        }
        else if (string[i] == U[j]) {
          string[i]='U';
          encrypt[i]=j;
          break;
        }
      }
    }
    printf("Case #%d:\n", t);
    printf("%s\n", string);
    for (int i=0; i<len; i++){
      printf("%d", encrypt[i]);
    }
    printf("\n");
    getchar();
  }
}