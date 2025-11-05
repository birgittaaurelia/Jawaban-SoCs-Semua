#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int idx[N];
    int array[N];

    for (int i=0; i<N; i++){
        scanf("%d", &idx[i]);
    }
    for (int i=0; i<N; i++){
        scanf("%d", &array[idx[i]]);
    }

    for (int i=0; i<N-1; i++){
        printf("%d ", array[i]);
    }
    printf("%d", array[N-1]);

    printf("\n");
    return 0;
}