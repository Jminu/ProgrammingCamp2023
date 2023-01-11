#include <stdio.h>

int main(void)
{
    char ch[11];

    printf("문자 10개 입력 : ");
    scanf("%s", ch);

    for(int i = 0; ch[i] != NULL; i++){
        for(int j = 0; j < ch[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}