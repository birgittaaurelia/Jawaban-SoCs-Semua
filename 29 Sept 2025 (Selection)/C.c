#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=1; t<=T; t++){
    int N;
    scanf("%d", &N);
    int first, second;
    scanf("%d %d", &first, &second);

    if (second > first){
      int temp = second;
      second = first;
      first = temp;
    }

    while (second != 0){
      int temp = first;
      first = second;
      second = temp%second;
    }

    for (int n=2; n<N; n++){
      scanf("%d", &second);

      if (second > first){
        int temp = second;
        second = first;
        first = temp;
      }

      while (second != 0){
        int temp = first;
        first = second;
        second = temp%second;
      }
    }
    printf("Case #%d: %d\n", t, first);
  }
}