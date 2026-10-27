#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}
void display(struct Complex c) {
    if (c.imag >= 0) printf("%.2f + %.2fi\n", c.real, c.imag);
    else printf("%.2f - %.2fi\n", c.real, -c.imag);
}
int main(void) {
    struct Complex c1, c2, sum;
    printf("Enter real and imaginary parts of first number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of second number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    sum = addComplex(c1, c2);
    printf("Sum = ");
    display(sum);
    return 0;
}
