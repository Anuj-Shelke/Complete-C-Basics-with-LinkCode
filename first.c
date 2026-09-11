#include <stdio.h>

// Partition function
int pivot(int arr[], int start, int end) {
    int pivot = arr[end];   // choose last element as pivot
    int pindex = start;

    for(int i = start; i < end; i++) {
        if(arr[i] <= pivot) {
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    // swap pivot into correct position
    int temp = arr[pindex];
    arr[pindex] = arr[end];
    arr[end] = temp;

    return pindex;
}

// QuickSort recursive function
void partition(int arr[], int start, int end) {
    if(start < end) {
        int pindex = pivot(arr, start, end);
        partition(arr, start, pindex - 1);
        partition(arr, pindex + 1, end);
    }
}

// Display function
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2,4,5,1,3};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Before Sorting: ");
    display(arr, len);

    partition(arr, 0, len-1);

    printf("After Sorting: ");
    display(arr, len);

    return 0;
}
