#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end;
    start = time(NULL);
    printf("10초가 되면 아무키나 누르세여\n");
    while (1)
    {
        if (getchar())
            break;
    }

    printf("종료되었습니다.\n");
    end = time(NULL);
    printf("경과된 시간은 %ld 초 입니다.\n", end - start);
    return 0;
}