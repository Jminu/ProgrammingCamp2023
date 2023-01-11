#include <stdio.h>

int main(void)
{
    int a, b;
    printf("두 수를 입력 : ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("합 : %d\n", a + b);
    else
        printf("곱 : %d\n", a * b);
    return 0;
}