#include <stdio.h>
int main(void)
{
    int x = 0, y = 0;
    int result;

    result = 2 > 3 || 6 > 7;
    printf("%d\n", result);

    result = 2 || 3 && 3 > 2;
    printf("%d\n", result);

    result = x = y = 1;
    printf("%d\n", result);

    printf("x = %d, y = %d\n", x, y);
    result = -++x + y--;
    printf("x = %d, y = %d\n", x, y);

    printf("%d\n", result);
}
