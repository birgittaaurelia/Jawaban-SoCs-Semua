#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int t=0; t<T; t++){
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int room[M];

        for (int m=0; m<M; m++){
            room[m] = 0;
        }
        
        int matrix[N][M];
        for (int i=0; i<N; i++){
            for (int m=0; m<M; m++){
                scanf("%d", &matrix[i][m]);
            }
        }

        for (int q=0; q<Q; q++){
            int student;
            scanf("%d", &student);
            for (int m=0; m<M; m++){
                if (matrix[student-1][m] == 1){
                    room[m]++;
                }
            }
        }
        printf("Case #%d:\n", t+1);
        for (int m=0; m<M; m++){
            if (room[m]%2 == 0) printf("NO\n");
            else printf("YES\n");
        }

    }
}