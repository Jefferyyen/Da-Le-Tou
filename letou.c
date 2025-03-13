# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void luckyboy(int *a, int *b, int *c, int *d, int *e, int *f);

int main(int argc, char *argv[])
{
    //避免每次都產生同一組數字
    srand(time(NULL));

    //初始化
    int A, B, C, D, E, F, i, count;

    //將引數字串轉成整數
    count=(argc > 1 ? atoi(argv[1]): 1);
    
    for (i=0 ; i < count; i++)
    {
        //呼叫幸運男孩，並且給它六組變數地址
        luckyboy(&A, &B, &C, &D, &E, &F);
    
        //印出幸運男孩的抽籤值
        printf("Here you go (group %d): \n", i+1);
        printf("%d, %d, %d, %d, %d, %d \n", A, B, C, D, E, F);
    }
    return 0;
}

void luckyboy(int *a, int *b, int *c, int *d, int *e, int *f)
{
    //第一個數字
    *a=rand() % 49 + 1;
    
    //不重複的第二個數字
    *b=rand() % 49 + 1;
    while (*a == *b)
    {
        *b=rand() % 49 + 1;
    }
    
    *c=rand() % 49 + 1;
    while (*a == *c || *b == *c)
    {
        *c=rand() % 49 + 1;
    }
    
    *d=rand() % 49 + 1;
    while (*a == *d || *b == *d || *c == *d)
    {
        *d=rand() % 49 + 1;
    }

    *e=rand() % 49 + 1;
    while (*a == *e || *b == *e || *c == *e || *d == *e)
    {
        *e=rand() % 49 + 1;
    }

    *f=rand() % 49 + 1;
    while (*a == *f || *b == *f || *c == *f || *d == *f || *e == *f)
    {
        *f=rand() % 49 + 1;
    }
}