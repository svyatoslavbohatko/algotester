#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%i %i", &m, &n);
    int a[m], b[n], mina=0, minb=0, min;
    for (int i = 0; i<m; i++)
        scanf("%i", &a[i]);
    for (int i = 0; i<n; i++)
        scanf("%i", &b[i]);
    mina=a[0];
    minb=b[0];
    for (int i = 0; i<m; i++)
    {
        if (a[i]<mina)
            mina=a[i];
    }
    for (int i = 0; i<n; i++)
    {
        if (b[i]<minb)
            minb=b[i];
    }
    min = mina+minb;
    printf("%i\n", min);
    
}
