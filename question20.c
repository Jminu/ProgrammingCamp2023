#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_password(char *password);
void show_info();

int main(void)
{
    char password[100];
    char checking_pw[100];

    printf("====비밀번호를 등록합니다====\n");
    while(1){
        show_info();
        printf("새로운 비밀번호 입력 : ");
        scanf("%s", password);

        if(check_password(password) == 1){ //조건 만족
            printf("비밀번호 한번 더 입력 : ");
            scanf("%s", checking_pw);
            if(strcmp(password, checking_pw) == 0){
                printf("비밀번호 등록 완료.\n");
                break;
            }
            else {
                printf("비밀번호를 전확하게 입력해주셈.\n");
                continue;
            }
        }
        else{ //조건 불만족
            continue;
        }
    }

    return 0;
}

int check_password(char *password)
{
    int size = strlen(password);
    int alpha = 0;
    int digit = 0;

    for(int i = 0; i < size; i++){
        if(isalpha(password[i]) == 1) //if alpha plus
            alpha++;
        else if(isdigit(password[i]) == 1) //if digit plus
            digit++;
    }
    if(alpha > 0 && digit > 0 && size >7) //모든 조건 만족
        return 1; //satisfy return 1
    else
        return 0; //not satisfy return 0
}

void show_info()
{
    printf("비밀번호는 영문, 숫자포함 최소한 8자리 이어야 합니다.\n");
}