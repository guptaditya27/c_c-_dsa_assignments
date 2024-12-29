# include<stdio.h>

int main() {
    int x=10>8>4;
    printf("%d",x);
    return 0;
}/*
explination:-
priority (assignmemnt<< relational)
so first relational operator going to evaluate
in c true =1 and false =0;
now associativity of relational left to ryt
10>8 true;==1
now 1>4== false ==0;
so int x ==0;


*/