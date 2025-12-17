#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d\n", &T);


    for (int t=1; t<=T; t++){
        char curr[101];
        fscanf(fp, "%s", curr);

        int a;
        fscanf(fp, "%d\n", &a);

        int len = strlen(curr);
        int isChanged[26] = {0};

        for (int i=0; i<a; i++){
            char bef, aft;

            fscanf(fp, "%c %c\n", &bef, &aft);

            if (isChanged[bef - 'A'] == 0){
                for (int j=0; j<len; j++){
                    if (curr[j] == bef) {
                        curr[j] = aft;
                    }
                }
                isChanged[bef - 'A'] = 1;
            }
        }

        int alphabets[26];

        for (int i=0; i<26; i++){
            alphabets[i] = 0;
        }

        for (int i=0; i<len; i++){
            alphabets[curr[i] - 'A']++;
        }

        for (int i=0; i<26; i++){
            if (alphabets[i] > 0){
                printf("%c %d\n", i+'A', alphabets[i]);
            }
        }
    }

    fclose(fp);

    return 0;
}