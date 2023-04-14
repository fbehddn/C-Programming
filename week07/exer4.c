// 컴퓨터와 랜덤 보가위바위
#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int com = (rand() % 3 + 1); // 1,2,3
    printf("1,2,3 (1=가위 2=바위 3=보) 중 하나 입력: ");

    int me;
    scanf("%d", &me);
    printf("컴퓨터가 낸 것 : %d\n", (rand() % 3 + 1));
    if (com == 1)
    {
        if (me == 1)
            printf("비김");
        else if (me == 2)
            printf("이김");
        else
            printf("짐");
    }
    else if (com == 2)
    {
        if (me == 1)
            printf("짐");
        else if (me == 2)
            printf("비김");
        else
            printf("이김");
    }
    else
    {
        if (me == 1)
            printf("이김");
        else if (me == 2)
            printf("짐");
        else
            printf("비김");
    }
}