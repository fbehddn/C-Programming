#include <stdio.h>
#include <stdarg.h>
int sum(int, ...);

int main(void)
{
    int answer = sum(4, 4, 3, 2, 1);
    printf("합은 %d입니다.\n", answer);
    return (0);
}

int sum(int num, ...)
{
    int answer = 0;
    va_list argptr;
    va_start(argptr, num);
    for (; num > 0; num--)
    {
        answer += va_arg(argptr, int); // 매개변수 하나씩 받을 수 있는 역할
    }
    va_end(argptr);
    return (answer);
}