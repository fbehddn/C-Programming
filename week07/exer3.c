#define _crt_secure_no_warnings
#include <stdio.h>

int main(void)
{
    printf("정수 세 개 입력: ");
    int x, y, z;
    int min = 0;

    scanf("%d %d %d", &x, &y, &z);

    if (x < y)
    {
        if (x < z)
            min = x;
        else if (x > z)
            min = z;
    }
    else
    {
        if (z > y)
            min = y;
        else if (z > x)
            min = y;
    }
    printf("%d %d %d 중 최소값은 : %d", x, y, z, min);
}
