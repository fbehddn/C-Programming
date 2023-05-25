#include <stdio.h>

void inc(int counter)
{
    counter++;
}
int main(void)
{
    int i;
    i = 10;
    printf("함수 호출 전 = %d\n", i);
    inc(i);
    printf("함수 호출 후 = %d\n", i);
    return 0;
}
