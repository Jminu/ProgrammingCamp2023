#include <stdio.h>

int main(void)
{
    double height;
    double width;
    double S;

    printf("밑변, 높이 : ");
    scanf("%lf %lf", &width, &height);

    S = (height * width) / 2;

    printf("밑변 %.02lfcm 높이 %.02lfcm인 삼각형의 면적 %.02lfcm^2", width, height, S);

    return 0;
}