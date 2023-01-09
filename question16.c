#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include <stdio.h>

int main(void)
{
    char str[100];

    gets(str); //문자열 입력

    for(int i = 0; i < strlen(str); i++){
        if(isupper(str[i]) != 0) //대문자면
            str[i] = tolower(str[i]);
        else //소문자면
            str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
    return 0;
}