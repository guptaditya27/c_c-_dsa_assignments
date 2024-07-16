#include <stdio.h>

int main() {
    // Write C code here
    int k;
    printf("Enter no of terms:- ");
    scanf("%d",&k);
    int a[k];
    int i=0,sumeven=0,sumodd=0;
    
    while(i<k)
    {
        printf("Enter %d no of array",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {sumeven+=a[i];}
        else{
            sumodd+=a[i];
        }
        i++;
    }
    printf("%d even sum",sumeven);
    printf("\n%d odd sum",sumodd);

    return 0;
}