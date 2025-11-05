#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  int array[N][N];
  
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      scanf("%d", &array[i][j]);
    }
  }

  for (int i=0; i<N; i++){
    int seenRow[100] = {0};
    for (int j=0; j<N; j++){
      if (seenRow[array[i][j]] == 1){
        printf("Nay\n");
        return 0;
      } 
      else{
        seenRow[array[i][j]] = 1;
      }
    }
  }

  for (int i=0; i<N; i++){
    int seenCol[100] = {0};
    for (int j=0; j<N; j++){
      if (seenCol[array[j][i]] == 1) {
        printf("Nay\n");
        return 0;
      }
      else{
        seenCol[array[j][i]] = 1;
      }
    }
  }
  printf("Yay\n");
}