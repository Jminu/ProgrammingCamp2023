#include <stdio.h>

int main(void)
{
    double a;
    double b;

    scanf("%lf %lf", &a, &b);

    printf("합 : %lf\n", a + b);
    printf("차 : %lf\n", a - b);
    printf("곱 : %lf\n", a * b);
    printf("몫 : %lf\n", a / b);

    return 0;
}