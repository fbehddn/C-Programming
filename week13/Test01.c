#include <stdio.h>
#define CRT_SECURE_NO_WARNIGS

void show_digit(int x);

int main(void)
{
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    show_digit(n);
}

void show_digit(int x)
{
    if (x / 10 > 0)
    {
        show_digit(x / 10);
    }
    printf("%d ", x % 10);
}