#include <stdio.h>
#include <string.h>

int main(void)
{
    char *id = "Hansung";
    char *password = "Computer";

    char user_id[20];
    char *user_password[20];

    printf("아이디 : ");
    scanf("%s", user_id);

    printf("비밀번호 : ");
    scanf("%s", user_password);

    if(strcmp(id, user_id) == 0){ //아이디 일치
        if(strcmp(password, user_password) == 0)
            printf("일치합니다.\n");
        else
            printf("비밀번호가 틀립니다.\n");
    }
    else{ //아이디 틀림
        if(strcmp(password, user_password) == 0)
            printf("아이디만 틀립니다.\n");
        else
            printf("아이디, 비밀번호가 틀립니다.\n");
    }

    return 0;
}