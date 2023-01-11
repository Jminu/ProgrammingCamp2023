#include <stdio.h>

int main(void)
{
    double income;
    printf("연 소득을 입력하세요 : ");
    scanf("%lf", &income);

    if(income <= 1000){
        income *= 0.09;
        printf("%lf\n", income);
    }
    else if(income > 1000 && income <= 4000){
        income *= 0.18;
        printf("%lf\n", income);
    }
    else if(income > 4000 && income <= 8000){
        income *= 0.27;
        printf("%lf\n", income);
    }
    else{
        income *= 0.36;
        printf("%lf\n", income);
    }

    return 0;
}