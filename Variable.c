#include <stdio.h>

int main()
{
    // Variable declaration in C
    int y = 50;
    int x = 30;
    int z = x + y;
    printf("Sum of x + y = %d\n", z);

    // %d means a decimal number
    int a = 10;
    int b = 50;
    printf("The Result is %d + %d = %d\n", a, b, a + b);
    printf("The Result is %d - %d = %d\n", a, b, a - b);
    printf("The Result is %d * %d = %d\n", a, b, a * b);
    printf("The Result is %d / %d = %d\n", a, b, a / b);
    return 0;
}