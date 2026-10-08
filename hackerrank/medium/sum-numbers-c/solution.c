#include <stdio.h>

int main() {
    int num1;
    int num2;
    float num3;
    float num4;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);

    int intSum = num1 + num2;
    int intDiff = num1 - num2;
    float floatSum = num3 + num4;
    float floatDiff = num3 - num4;

    printf("%d %d\n", intSum, intDiff);
    printf("%.1f %.1f\n", floatSum, floatDiff);

    return 0;
}
