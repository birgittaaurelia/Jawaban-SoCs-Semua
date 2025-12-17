#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    int arr[10000];
    for (int t=1; t<=n; t++){
        int sum = 0;
        for (int j = 0; j<25; j++){
            scanf("%d", &arr[j]);
            sum += arr[j];
        }

        //ascending
        for (int i = 1; i<25; i++){
            for (int j=24; j >= i; j--){
                if (arr[j-1] > arr[j]){
                    swap(&arr[j], &arr[j-1]);
                }
            }
        }
        int Y[5];

        Y[0] = arr[0]/2;
        Y[1] = arr[1] - Y[0];
        Y[4] = arr[24] / 2;
        Y[3] = arr[23] - Y[4];
        Y[2] = (sum/10) - Y[0] - Y[1] - Y[3] - Y[4];
        printf("Case #%d: ", t);

        for (int i=0; i<5; i++){
            if (i > 0) printf(" ");
            printf("%d", Y[i]);
        }

        printf("\n");
    }
}