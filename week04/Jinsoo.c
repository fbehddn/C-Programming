#include <stdio.h>

int main(void)
{
    int x = 10;   // 10은 10진수이고 int형이고 값은 십진수로 10이다.
    int y = 010;  // 010은 8진수이고 int형이고 값은 십진수로 8이다.
                  // 0이 앞에 붙으면 8진수
    int z = 0x10; // 010은 16진수이고 int형이고 값은 십진수로 16이다.
                  // 0x가 앞에 붙으면 16진수

    printf("x= %d\n", x);
    printf("y= %d\n", y);
    printf("z= %d", z);

    return 0;
}