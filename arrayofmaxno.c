#include <stdio.h>

int main() {
    int arr[] = {10, 50, 20, 30, 40};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    if (length == 0) {
        printf("The array is empty.\n");
        return 1;
    }
    int max = arr[0]; 
    int index = 0; 

    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Index of maximum element: %d\n", index);

    return 0;
}