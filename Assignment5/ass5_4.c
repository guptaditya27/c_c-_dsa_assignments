#include <stdio.h>

int isEven(int n) {
    return ((n / 2) * 2 == n);
}

int main() {
    int n = 102;
    isEven(n) ? printf("Even\n") : printf("Odd\n");
    return 0;
}
