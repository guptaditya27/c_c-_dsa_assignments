# include<stdio.h>
// what does rotating an array means
/*
jitne no se rotate krna ho 
utne index of array ko aage kr dege
*/
void rotate_array(int [],int,int,int);
void rotate_array(int a[],int n,int size,int d)
{   
   int temp; 
  
  
  if(d==1)
  {
    
    
    while(n){
        temp=a[size-1];
        for(int i=size-2;i>=0;i--)
            a[i+1]=a[i];
        a[0]=temp;
        n--;

    }
    for(int i=0;i<size;i++)    
        printf("%d ",a[i]);
  }
  else{

  } 
}

int main() {
    int size;
    int d;
    printf("enter size of array");
    scanf("%d",&size);
    int n,a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter %d term:- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter no terms to rotate");
    scanf("%d",&n);
    printf("Enter direction to rotate\n 1---- for right\n-1---- for left");
    scanf("%d",&d);

    if(n>size)
    {
        printf("Enter valid rotate terms 0 ---- %d",size);
    }
    else{
        rotate_array(a,n,size,d);
    }
    return 0;
}