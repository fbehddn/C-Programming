#include <stdio.h>

int main(void)
{
    double speed, distance;
    double time = distance/speed;

    printf("빛의 속도는 ");
    scanf("%lf", &speed);
    printf("태양과 지구와의 거리 ");
    scanf("%lf", &distance);

    printf("도달 시간은 %lf 초", time);

}