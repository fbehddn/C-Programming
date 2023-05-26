#include <stdio.h>

int main(void)
{
    int scores[] = {1, 2, 3, 4, 5, 6};
    int size;

    size = sizeof(scores) / sizeof(scores[0]);

    printf("sizzeof(scores) = %d\n", sizeof(scores));
    printf("sizeof(scores[0]) = %d\n", sizeof(scores[0]));

    for (int i = 0; i < size; i++)
    {
        printf("%d", scores[i]);
    }
}