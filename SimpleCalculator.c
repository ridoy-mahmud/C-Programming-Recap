#include <stdio.h>

int main()
{
    float a, b, result;
    printf("Enter The First Number:");
    scanf("%f", &a);
    printf("Enter The Second Numeber:");
    scanf("%f", &b);
    result = a + b;
    printf("Sum of thio two number is  %.2f + %.2f = %.2f\n", a, b, result);
    result = a - b;
    printf("Subtraction of this two number is  %.2f - %.2f = %.2f\n", a, b, result);
    result = a * b;
    printf("Multiplication of this two number is  %.2f * %.2f = %.2f\n", a, b, result);
    result = a / b;
    printf("Dvision of thio two number is  %.2f / %.2f = %.2f\n", a, b, result);
    return 0;
}