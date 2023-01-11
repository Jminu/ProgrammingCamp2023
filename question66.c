#include <stdio.h>

void isPrime(int n);

int main(void)
{
    int num;

    printf("input num : ");
    scanf("%d", &num);

    isPrime(num);
    return 0;
}

void isPrime(int n)
{
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            printf("입력한 %d는 소수x.\n", n);
            return;
        }
    }
    printf("입력한 %d는 소수o\n", n);
}g
