#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

#define N 5
#define M 7

    srand(time(NULL));

    int i, j;
    int mt[N][M];

    int *pMT;
    pMT = &mt[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(pMT + (i * M + j)) = 1 + rand() % 100;
            printf("%d", *(pMT + (i * M + j)));
        }
        printf("\n");
    }

    return 0;
}
