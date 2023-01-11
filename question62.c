#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("3변의 길이를 입력 : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a != b && b != c && a != c){ //다 다름
        if((pow(a, 2) + pow(b, 2)) == pow(c, 2) ||
           (pow(a, 2) + pow(c, 2)) == pow(b, 2) ||
           (pow(b, 2) + pow(c, 2)) == pow(a, 2) ){
            printf("직각 삼각형\n");
        }
        else{
            printf("일반 삼각형\n");
        }
    }
    else if(a == b && b == c){
        printf("정삼각형\n");
    }
    else if((a == b && a != c) || (a == c && b != c)){ //2개만 같음
        printf("이등변 삼각형\n");
    }

    return 0;
}