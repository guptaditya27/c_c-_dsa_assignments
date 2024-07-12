# include<stdio.h>

int main() {
    int x=3<0&&5>0;
    printf("%d",x);
    return 0;
}
/*
explination:-
precedence relational > logiacal
so left to ryt evaluate hoga
now 3<0 == false 
false && anything = false ==0
so x==0;

*/