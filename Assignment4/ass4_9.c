# include<stdio.h>

int main() {
    int x=!2>-2;
    printf("%d",x);
    return 0;
}

/*
explination
!2: The exclamation mark (!) is the logical NOT operator. It negates the value of its operand. Since 2 is nonzero, !2 evaluates to 0 (false).
-2: This is a negative integer value.
!2 > -2: Now let’s compare the results:
!2 evaluates to 0.
-2 remains as -2.
So, 0 > -2 is true.
Therefore, the value of x will be 1 (true).
*/
