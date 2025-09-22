#include <stdio.h>

    int main() {
        char id[11];
        char name[101];
        char class;
        int num;

        scanf("%s\n",id);
        scanf("%100[^\n]\n",name);
        scanf("%c %d", &class, &num);

        printf("Id    : %s\n", id);
        printf("Name  : %s\n", name);
        printf("Class : %c\n", class);
        printf("Num   : %d\n", num);    

        return (0);
    }