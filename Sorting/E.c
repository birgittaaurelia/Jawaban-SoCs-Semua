#include <stdio.h>
//using quick sort

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;

    for (int j = low+1; j <= high; j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }

    swap(&arr[i], &arr[low]);
    return i;
}

void quickSort(int arr[], int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int binarySearch(int arr[], int left, int right, int target){
    while (left < right){
        int mid = (left + right)/2;

        if (arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return -2;
}

int main(){
    int T;
    scanf("%d", &T);

    int heights[T];

    for (int i=0; i<T; i++){
        scanf("%d", &heights[i]);
    }

    quickSort(heights, 0, T-1);

    int a;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        int curr;
        scanf("%d", &curr);

        printf("%d\n", binarySearch(heights, 0, T, curr)+1);

    }
}