
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct info{
    char str[50];
    struct info *link;
} NODE;

int main(void)
{
    NODE *p = NULL; //현재노드
    NODE *prev = NULL; //이전노드
    NODE *next = NULL; //다음노드
    NODE *list = NULL;

    char buffer[50];

    while(1){
        printf("문자열을 입력 : ");
        gets(buffer);

        if(buffer[0] == '\0')
            break;

        p = (NODE *)malloc(sizeof(NODE));
        strcpy(p->str, buffer);

        if(list == NULL){ //리스트 비어있으면
            list = p;
        }
        else{ //이전 노드의 끝에 새로운 노드 붙임
            prev->link = p;
        }
        p->link = NULL;
        prev = p;
    }

    //출력
    p = list;
    while(p != NULL){
        printf("%s\n", p->str);
        p = p->link;
    }

    //동적 할당 반납
    p = list;
    while(p != NULL){
        next = p->link;
        free(p);
        p = next;
    }

    return 0;
}
