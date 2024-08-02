#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int mergedArr[], int size) {
    int i = 0, j = 0, k = 0;

    while (i < size && j < size) {
        if (arr1[i] >= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If any elements are left in arr1, copy them to mergedArr
    while (i < size) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    // If any elements are left in arr2, copy them to mergedArr
    while (j < size) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int size;

    printf("Enter the size of the arrays (both should be the same): ");
    scanf("%d", &size);

    printf("Enter %d elements for the first array (sorted in descending order):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array (sorted in descending order):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, arr2, mergedArr, size);

    printf("Merged array (sorted in descending order):\n");
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}

