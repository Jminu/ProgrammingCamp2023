#include <stdio.h>

int main(void)
{
    char ch[11];
    int min_ascii;

    printf("10개의 문자입력 : ");
    scanf("%s", ch);

    min_ascii = ch[0];
    for(int i = 0; ch[i] != NULL; i++){
        if(min_ascii > ch[i])
            min_ascii = ch[i];
    }
    printf("%c", min_ascii);
    return 0;
}