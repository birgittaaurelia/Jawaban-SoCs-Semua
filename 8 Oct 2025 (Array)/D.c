#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=1; t<=T; t++){
    int x, y;
    scanf("%d %d", &x, &y);

    int array[x][y];
    for (int i=0; i<x; i++){
      for (int j=0; j<y; j++){
        scanf("%d", &array[i][j]);
      }
    }
    int max = 0;
    for (int i=0; i<x; i++){
      int curr = 0;
      for (int j=0; j<y; j++){
        if (array[i][j] > curr) curr = array[i][j];
      }
      max += curr;
    }

    printf("Case #%d: %d", t, max);
  }
}