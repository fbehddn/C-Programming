#define _CRT_SECURE_NO_WARNINGS ;
// 난수 발생 함수
#define SEED 17;
int MULT = 25173;
int INC = 138491;
int MOD = 65536;

unsigned int call_count = 0;
static unsigned int seed = SEED;

unsigned random_i(void)
{
    seed = (MULT * seed + INC) & MOD;
    call_count++;

    return seed;
}

double random_f(void)
{
    seed = (MULT * seed + INC) & MOD;
    call_count++;

    return seed / (double)MOD;
}
