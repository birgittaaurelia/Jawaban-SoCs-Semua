#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int t=1; t<=T; t++){
        int N;
        scanf("%d", &N);

        int array1[N][N];
        for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){
                scanf("%d", &array1[i][j]);
            }
        }
        getchar();

        int array2[N][N];
        for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){
                scanf("%d", &array2[i][j]);
            }
        }
        getchar();

        int array3[N][N];
        for (int i=0; i<N; i++){    
            for (int j=0; j<N; j++){
                scanf("%d", &array3[i][j]);
            }
        }
        getchar();

        int matrix[N][N];
        for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){
                matrix[i][j] = 0;
                for (int k=0; k<N; k++){
                    matrix[i][j] += array1[i][k] * array2[k][j];
                }
            }
        }

        int matrix2[N][N];
        for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){
                matrix2[i][j] = 0;
                for (int k=0; k<N; k++){
                    matrix2[i][j] += matrix[i][k] * array3[k][j];
                }
            }
        }
        printf("Case #%d:\n", t);
        for (int i=0; i<N; i++){
            for (int j=0; j<N-1; j++){
                printf("%d ", matrix2[i][j]);
            }
            printf("%d", matrix2[i][N-1]);
            printf("\n");
        }
        getchar();
    }
    return 0;
}