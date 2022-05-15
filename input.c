#include <stdio.h>

int main()
{

    // Take input of instser number
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d + %d = %d \n", a, b, a + b);

    // Take input of a float Number

    float c, d;
    scanf("%f", &c);
    scanf("%f", &d);
    printf("%f + %f = %f\n", c, d, c + d);

    // Charecter Input
    char e, f;
    scanf("%c", &e);
    scanf("%c", &f);
    printf("%c %c\n", e, f);
    return 0;
}