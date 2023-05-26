#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int scores[SIZE] = {31, 63};

    for (int i = 0; i < SIZE; i++)
    {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    return 0;
}