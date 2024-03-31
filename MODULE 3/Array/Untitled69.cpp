#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

   
    int maxNum = findMax(arr, size);

    printf("The maximum number in the array is: %d\n", maxNum);

    return 0;
}
