#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[26]; //알파벳개수 26개
    char check_alpha[26];
    int len;

    printf("문자열 입력 : ");
    scanf("%s", str);
    len = strlen(str);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(str[i] != check_alpha[j])
                check_alpha[i] = str[i];

        }
    }
    for(int i = 0; i < len; i++){
        printf("%c", check_alpha[i]);
    }
    return 0;
}