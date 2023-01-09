#include <stdio.h>

int main(void)
{
    double kiro;
    double mile;

    //1mile = 1.60935kilometers

    printf("마일 입력 : ");
    scanf("%lf", &mile); //mile값 입력

    kiro = (1.60935) * mile;

    printf("%lf 킬로미터\n", kiro);
    return 0;
}