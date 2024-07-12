#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter any number to find reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        // Extract the last digit of num
        int digit = num % 10;

        // Increase place value of reverse and add last digit to it
        reverse = reverse * 10 + digit;

        // Remove the last digit from num
        num /= 10;
    }

    printf("Reversed number = %d", reverse);
    return 0;
}
