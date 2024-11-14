#include <stdio.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // The space before %c helps skip any leading whitespace

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    // Perform the operation
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        if (b == 0) {
            printf("Error! Division by zero.\n");
            return 1;  // Exit the program with an error code
        }
        res = a / b;
        break;
    default:
        printf("Error! Invalid operator.\n");
        return 1;  // Exit the program with an error code
    }

    // Print the result
    printf("Result: %.2lf\n", res);

    return 0;
}
