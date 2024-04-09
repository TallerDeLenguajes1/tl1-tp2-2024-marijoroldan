#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    
#define N 5
#define M 7

srand(time(NULL));

int i,j;
int mt[N][M];

int *pMT;
pMT = &mt[N][M];
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
//mt[i][j]=*(pMT+ (i*));
printf("%d", mt[i][j]);
}
printf("\n");
}

    return 0;
}
