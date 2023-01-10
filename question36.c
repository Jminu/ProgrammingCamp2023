#include <stdio.h>

int strlength(char *s);

int main(void)
{
    char str[50];
    int len;
    printf("문자열 입력 : ");
    gets(str);

    len = strlength(str);
    printf("%d", len);
    return 0;
}

int strlength(char *s)
{
    int len = 0;

    while(s[len] != NULL){
        len++;
    }

    return len;
}

