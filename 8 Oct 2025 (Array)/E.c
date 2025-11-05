#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=1; t<=T; t++){
    int num;
    scanf("%d", &num);

    int array[num];
    for (int i=0; i<num; i++){
      scanf("%d", &array[i]);
    }

    int count = 0;
    for (int i=0; i<num; i++){
      for (int j=0; j<num; j++){
        for (int k=0; k<num; k++){
          if (i != j && i != k && j != k){
            if (array[i] == array[j] + array[k]) {
              count++;
              j = k = num;
            }
          }
        }
      }
    }
    printf("Case #%d: %d\n", t, count);
  }
  return 0;
}