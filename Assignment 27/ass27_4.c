#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* Merge(int a[], int b[], int size1, int size2) {
    int i,j,k;
    int*ptr;
    ptr=(int*)malloc((size1+size2)*sizeof(int));
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(a[i]<b[j])
        {
            ptr[k]=a[i];
            i++;

        }
        else{
            ptr[k]=b[j];
            j++;
        }
    }
    while (i<size1)
    {
        ptr[k]=a[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        ptr[k]=b[j];
        j++;
        k++;
    }
    

    return ptr;
}

int main() {
    int a[5] = {10, 17, 20, 27, 30};
    int b[7] = {11, 13, 19, 22, 25, 36, 37};
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
