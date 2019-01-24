#include <stdio.h>

int main(void)
{
    int N, K, d;
    scanf ("%d %d", &N, &K);
    if((N<=3*K) && (N>=K))
    {
        while (K>0)
        {
            d = N/K;
            N-=d;
            K--;
            printf("%d ", d);
        }
        printf("\n");
    }
    else
        printf("Impossible\n");
}
