/*威力彩玩法較為特別，分為兩區：第一區有1~38號，可任選6個號碼投注；
第二區則有1~8號，可任選一號投注，並能以同一張彩券直接連續投注2~20期。 
而開獎則是第一區開出6個號碼，第二區開出1個號碼。 
共分為9種獎項，頭獎為全部號碼皆對中；最低獎項為普獎，即第一區和第二區各對中1個號碼，獎金固定為100元。*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void luckyboy1(int *a, int *b, int *c, int *d, int *e, int *f);
void luckyboy2(int *g);

int main(){
    int A, B, C ,D, E ,F, G;
    srand(time(NULL));
    luckyboy1(&A, &B, &C, &D, &E, &F);
    printf("Group 1\n");
    printf("Here is section 1: %d %d %d %d %d %d\n", A, B, C, D, E, F);
    luckyboy2(&G);
    printf("Here is section 2: %d\n", G);
    return 0;
}


void luckyboy2(int *g){
    *g=rand() % 8 + 1;
}

void luckyboy1(int *a, int *b, int *c, int *d, int *e, int *f)
{
    //第一個數字
    *a=rand() % 38 + 1;
    
    //不重複的第二個數字
    *b=rand() % 38 + 1;
    while (*a == *b)
    {
        *b=rand() % 38 + 1;
    }
    
    *c=rand() % 38 + 1;
    while (*a == *c || *b == *c)
    {
        *c=rand() % 38 + 1;
    }
    
    *d=rand() % 38 + 1;
    while (*a == *d || *b == *d || *c == *d)
    {
        *d=rand() % 38 + 1;
    }

    *e=rand() % 38 + 1;
    while (*a == *e || *b == *e || *c == *e || *d == *e)
    {
        *e=rand() % 38 + 1;
    }

    *f=rand() % 38 + 1;
    while (*a == *f || *b == *f || *c == *f || *d == *f || *e == *f)
    {
        *f=rand() % 38 + 1;
    }
}