#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=0; t<T; t++){
    int a;
    scanf("%d", &a);
    
    int max = (1 + (a-1)*2);
    int curr = 1;

    for (int j=1; j<=a; j++){
      for (int i=0; i< (max-curr)/2; i++){
        printf(" ");
      }

      for (int i=0; i<curr; i++){
        printf("*");
      }
      printf("\n");
      curr += 2;
    }
  }
  return 0;
}