#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int size;
    int i;

    gets(str); //공백포함 문자열 받음
    size = strlen(str);

    for(i = 0; i < size; i++){
        if(str[i] == ' '){
            for(int j = i + 1; j < size; j++){
                printf("%c", str[j]);
            }
            break;
        }
    }
    return 0;
}