#include <stdio.h>
#define CRT_SECURE_NO_WARNIGS

long fact(int n)
{
    printf("fact(%d)\n", n);

    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main(void)
{
    int x = 0;
    long f;

    printf("정수를 입력하시오:");
    scanf("%d", &x);
    printf("%d!은 %ld입니다.\n", x, fact(x));

    return 0;
}