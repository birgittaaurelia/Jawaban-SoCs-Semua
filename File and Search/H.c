#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    long long array[a];
    for (int i=0; i<a; i++){
        scanf("%lld", &array[i]);
    }

    long long lvl;
    scanf("%lld", &lvl);

    for (int i=0; i<a; i++){
        for (int j=0; j < a-i-1; j++){
            if (array[j] > array[j+1]){
                long long temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    int victory = 0;
    for (int i=0; i<a; i++){
        if (lvl >= array[i]){
            victory++;
            lvl -= array[i];
        }
    }
    printf("%d\n", victory);
}