#include <stdio.h>
#define G 9.80665
#define TOWER 200

int main(void)
{
    double H = 200; //공의 높이
    double t = 0; //시간

    printf("시간               높이\n");
    printf("=====================\n");
    for(t = 0; H > 0; t++){
        H = 200 - (0.5 * G * t * t);
        if(H < 0)
            break;
        printf("%lf초         %lfM\n", t, H);
    }

    return 0;
}