#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_dic(char *s1, char *s2);

//아스키 코드, 대소문자 구분x
int main(void)
{
    char word1[50];
    char word2[50];

    printf("첫번째 문자열을 입력 : ");
    scanf("%s%*c", word1);
    //대문자 -> 소문자
    for(int i = 0; i < strlen(word1); i++){
        if(isupper(word1[i]) == 1)
            word1[i] = tolower(word1[i]);
    }

    printf("두번째 문자열을 입력 : ");
    scanf("%s%*c", word2);
    //대문자 -> 소문자
    for(int i = 0; i < strlen(word2); i++){
        if(isupper(word2[i]) == 1)
            word2[i] = tolower(word2[i]);
    }

    check_dic(word1, word2);

    return 0;
}

void check_dic(char *s1, char *s2)
{
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    int compare_size;

    if(size1 > size2)
        compare_size = size1;
    else
        compare_size = size2;

    for(int i = 0; i < compare_size; i++) {
        if (s1[i] > s2[i]) {
            printf("%s이 %s보다 사전앞에 있습니다.\n", s2, s1);
            break;
        }
        else if (s1[i] < s2[i]) {
            printf("%s이 %s보다 사전앞에 있습니다.\n", s1, s2);
            break;
        }
        else //여기선 단어 길이로 판정
            if(size1 > size2) {
                printf("%s이 %s보다 사전앞에 있습니다.\n", s2, s1);
            }
            else{
                printf("%s이 %s보다 사전앞에 있습니다.\n", s1, s2);
            }
    }
}