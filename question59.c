#include <stdio.h>

int main(void)
{
    int N;
    printf("input N : ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        printf("%d ", i);
    }
    return 0;
}