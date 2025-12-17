#include <stdio.h>
#include <string.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    char words[a][b+1];

    for (int p=0; p<a; p++){
        scanf("%s", words[p]);

        for (int i=0; i<b; i++){
            for (int j=0; j<b-i-1; j++){
                if (words[p][j] > words[p][j+1]){
                    char temp = words[p][j];
                    words[p][j] = words[p][j+1];
                    words[p][j+1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < a - i - 1; j++){
            if (strcmp(words[j], words[j+1]) < 0){
                char temp[201];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    for (int i=0; i<a; i++){
        printf("%s\n", words[i]);
    }

    return 0;
}