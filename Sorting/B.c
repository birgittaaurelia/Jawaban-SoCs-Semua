#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int t=1; t<=T; t++){
        int a, b;
        scanf("%d %d", &a, &b);

        int array[a];
        for (int i=0; i<a; i++){
            scanf("%d", &array[i]);
        }

        for (int i=0; i<a; i++){
            for (int j=0; j<a-i-1; j++){
                if (array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }

        int max = 0;
        int temp = b;

        for (int i=0; i<a; i++){
            if (array[i] <= temp){
                max++;
                temp-=array[i];
            }
            else{
                break;
            }
        }

        int min = 0;
        temp = b;
        for (int i=a-1; i>-1; i--){
            if (array[i] <= temp){
                min++;
                temp-=array[i];
            }
            else{
                break;
            }
        }

        printf("Case #%d: %d %d\n", t, min, max);
    }
}