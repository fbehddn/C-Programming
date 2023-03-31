#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = -3; // 음수가 2의보수로 표현되는지 알아보자

    printf("x= %08X\n", x);     // 8자리의 16진수로 출력한다.
    printf("x= %08X\n", y);     // 8자리의 16진수로 출력한다.
    printf("x= %08X\n", x + y); // 8자리의 16진수로 출력한다.

    return 0;
}