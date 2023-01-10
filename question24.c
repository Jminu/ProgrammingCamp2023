
#include <stdio.h>

int main(void)
{
    char str[20];
    int i, j, len = 0;

    printf("문자열 입력 : ");
    gets(str);

    for(i = 0; str[i] != NULL; i++){
        len++;
    }
    printf("문자열 길이 : %d\n", len);
    for(i = 0; i < len; i++){
        for(j = 0; j < len - i; j++){
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}