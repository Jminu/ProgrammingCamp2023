#include <stdio.h>
#include <string.h>

void remove_space(char *s);

int main(void)
{
    char str[100];
    gets(str); //scanf로 하면 단어한개만 받을 수 있음. gets()는 공백포함 문자열 받을 수 있음.

    remove_space(str);

    return 0;
}

void remove_space(char *s)
{
    char *token = strtok(s, " ");

    while(token != NULL){
        printf("%s", token);
        token = strtok(NULL, " ");
    }
}