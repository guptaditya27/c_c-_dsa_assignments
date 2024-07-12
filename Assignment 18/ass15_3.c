#include <stdio.h>

int main() {
    int num;
    int sumeve=0,sumodd=0;
    printf("Enter the number of terms for the array: ");
    scanf("%d", &num);

    int even[num], odd[num];
    for (int i = 1, j = 2; i <= 2 * num; i += 2, j += 2) {
        even[i / 2] = j;
        odd[i / 2] = i;
    }

    printf("Even numbers: ");
    for (int i = 0; i < num; i++) {
        sumeve=sumeve+even[i];
        sumodd=sumodd+odd[i];
    }
    printf("\n");
    printf("%d\n%d",sumeve,sumodd);
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",odd[i]);
    }


    return 0;
}


/*
1. create ek even /odd no array automatically
2. then calculate sum of both.
3. its not usual file
*/