#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* Merge(int a[], int b[], int sizeA, int sizeB) {
    int size = sizeA + sizeB;
    int *ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    for (int i = 0; i < sizeA; i++) {
        ptr[i] = a[i];
    }
    for (int i = 0; i < sizeB; i++) {
        ptr[sizeA + i] = b[i];
    }

    return ptr;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[7] = {1, 2, 3, 4, 5, 6, 7};
    int *p;
    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    p = Merge(a, b, sizeA, sizeB);

    for (int i = 0; i < sizeA + sizeB; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    
    free(p); // Don't forget to free the allocated memory
    return 0;
}
