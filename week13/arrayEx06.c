#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};

    if (a == b)
        printf("같은 결과입니다.\n");
    else
        printf("잘못된 결과입니다.\n");
}