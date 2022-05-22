#include <stdio.h>

int main()
{
    char ch = 'C';
    short num = 100;
    printf("%d %c %x\n", ch, ch, ch);
    printf("Output ::  %d\n", ch + num);

    float a = 5.6;
    float b = 7.8;
    float c = 3.8;

    // Auto Conversion
    int result = a + b + c;
    printf("Result is %d\n", result);

    // Explesit Conversion
    int result2 = (int)a + (int)b + (int)c;
    printf("The Proper Result is %d\n", result2);

    return 0;
}