#include <stdio.h>
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b, int *ok) {
    if (b == 0) {
        printf("Error: division by zero\n");
        *ok = 0;
        return 0;
    }
    return a / b;
}
double calculate(double a, double b, char op, int *ok) {
    *ok = 1;
    switch (op) {
        case '+': return add(a, b);
        case '-': return subtract(a, b);
        case '*': return multiply(a, b);
        case '/': return divide(a, b, ok);
        default:
            printf("Error: invalid operator\n");
            *ok = 0;
            return 0;
    }
}
int main(void) {
    double a, b, r;
    char op;
    int ok;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    r = calculate(a, b, op, &ok);
    if (ok) printf("Result = %.2f\n", r);
    return 0;
}
