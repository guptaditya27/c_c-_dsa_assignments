#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("......................................\n");
        printf("Enter 1 for Addition\n");
        printf("Enter 2 for Subtraction\n");
        printf("Enter 3 for Multiplication\n");
        printf("Enter 4 for Division\n");
        printf("Enter 5 for Exponentiation\n");
        printf("Enter 6 to Quit\n");
        printf("......................................\n");
        scanf("%d", &choice);

        if (choice == 6) {
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter 1st Number: ");
                scanf("%f", &a);
                printf("Enter 2nd Number: ");
                scanf("%f", &b);
                printf("Addition of %.2f and %.2f is \"%.2f\"\n", a, b, a + b);
                break;

            case 2:
                printf("Enter 1st Number: ");
                scanf("%f", &a);
                printf("Enter 2nd Number: ");
                scanf("%f", &b);
                printf("Subtraction of %.2f and %.2f is \"%.2f\"\n", a, b, a - b);
                break;

            case 3:
                printf("Enter 1st Number: ");
                scanf("%f", &a);
                printf("Enter 2nd Number: ");
                scanf("%f", &b);
                printf("Multiplication of %.2f and %.2f is \"%.2f\"\n", a, b, a * b);
                break;

            case 4:
                printf("Enter Numerator: ");
                scanf("%f", &a);
                printf("Enter Denominator: ");
                scanf("%f", &b);
                if (b != 0) {
                    printf("Division of %.2f by %.2f is \"%.2f\"\n", a, b, a / b);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Enter Base: ");
                scanf("%f", &a);
                printf("Enter Power: ");
                scanf("%f", &b);
                printf("Exponentiation of %.2f^%.2f is \"%.2f\"\n", a, b, pow(a, b));
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
