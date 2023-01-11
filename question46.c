#include <stdio.h>

int main(void)
{
    char alpha;
    printf("알파벳 입력 : ");
    scanf("%c", &alpha);

    if(alpha >= 65 && alpha <= 90)
        alpha = alpha + 32;
    else{
        alpha = alpha - 32;
    }
    printf("변환된 문자 : %c\n", alpha);
    return 0;
}