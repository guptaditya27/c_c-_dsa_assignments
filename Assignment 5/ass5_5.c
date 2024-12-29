# include<stdio.h>

int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("\"%d\" number is even",n);

    }
    else if((n&1)==1){
        printf("\"%d\" number is odd",n);
    }
    else
    {
        printf("%d\"not expected input",n);
    }
    return 0;
}

/*
when we take and(&)of any no with 1 
this results as follows:-
if odd no like 5 binary 101
and binary 1 is         001
on taking and of both   001 ie 1

if take even no like 12 1100
binary 1 is             0001
on taking and          0000 ie 0


# seedhi batt
even & 1 ==0
odd & 1 ==1
*/