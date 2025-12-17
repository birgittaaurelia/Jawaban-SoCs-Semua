#include <stdio.h>
#include <string.h>

struct Dictionary{
    char shorts[51];
    char original[51];
};

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int a;
    fscanf(fp, "%d\n", &a);

    struct Dictionary lists[a];

    for (int i=0; i<a; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", lists[i].shorts, lists[i].original);
    }

    int b;
    fscanf(fp, "%d\n", &b);

    for (int i=1; i<=b; i++){
        printf("Case #%d:\n", i);

        char before[101];

        fscanf(fp, "%[^\n]\n", before);
        char *word = strtok(before, " ");
        while (word != NULL){
            int found = 0;
            for (int j=0; j<a; j++){
                if (strcmp(word, lists[j].shorts) == 0){
                    printf("%s", lists[j].original);
                    found = 1;
                    break;
                }
            }

            if (!found){
                printf("%s", word);
            }

            word = strtok(NULL, " ");
            if (word != NULL) printf(" ");
        }
        printf("\n");
    }
    return 0;
}