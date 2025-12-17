#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int value(char s){
    if (s >= 'A' && s <= 'Z') return s - 'A';
    else return s-'a';
}

void merge(char arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char *L = malloc(n1 * sizeof(char));
    char *R = malloc(n2 * sizeof(char));


    for (int i=0; i<n1; i++) L[i] = arr[left + i];
    for (int i=0; i<n2; i++) R[i] = arr[mid + i + 1];

    int i=0, j=0, k=left;
    while(i < n1 && j < n2){
        if (value(L[i]) < value(R[j]) || (value(L[i]) == value(R[j]) && L[i] < R[j])){
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
        }
    }

    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(char arr[], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    static char string[10000001];
    scanf("%s", string);

    int len = strlen(string);
    mergeSort(string, 0, len-1);

    printf("%s\n", string);
}