#include <stdio.h>

int main(void)
{
    char operator;
    int a, b;
    int sum = 0;

    printf("입력 : ");
    scanf("%c %d %d", &operator, &a, &b);

    switch (operator) {
        case '+':
            sum = a + b;
            break;
        case '-':
            sum = a - b;
            break;
        case '*':
            sum = a * b;
            break;
        case '%':
            sum = a % b;
            break;
        case '&':
            sum = a ? a : b; //a가 참이면 a반환, 거짓이면 b반환
            break;
        default:
            break;
    }
    printf("출력 : %d %c %d = %d\n", a, operator, b, sum);
    return 0;
}