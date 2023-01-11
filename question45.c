#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} NODE;

int find_max(NODE *p);
int find_listlength(NODE *p);

int main(void)
{
    NODE *p = NULL;
    NODE *list = NULL;
    NODE *prev = NULL;
    NODE *next = NULL;

    int num;
    int max;
    int len;

    printf("0입력하면 입력 종료!\n");
    do{
        scanf("%d", &num);
        p = (NODE *) malloc(sizeof(NODE));
        p->data = num;
        if(list == NULL)
            list = p;
        else
            prev->link = p;
        p->link = NULL;
        prev = p;

    }while(num != 0);

    p = list;
    len = find_listlength(p);
    printf("연결리스트 길이 : %d\n", len - 1);

    p = list;
    max = find_max(p);
    printf("================\n");
    printf("최댓값 : %d\n", max);

    //메모리 반납
    p = list;
    while(p != NULL){
        next = p->link;
        free(p);
        p = next;
    }

    return 0;
}

int find_max(NODE *p)
{
    int max;
    max = p->data;
    while(p->link != NULL){
        if(max < (p->link->data))
            max = p->link->data;
        p = p->link;
    }
    return max;
}

int find_listlength(NODE *p)
{
    int count = 0;
    while(p != NULL){
        count++;
        p = p->link;
    }
    return count;
}