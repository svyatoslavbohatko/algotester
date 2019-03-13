#include <stdio.h>

int main(void)
{
    int n,k;
    scanf ("%d %d", &n, &k);
    int d = n/k;
    for (int i = 0; i<d; i++)
    {
        printf("3 ");
        n=n-3;
    }
    while (n!=k)
    {
        printf ("2 ");
        n-=2;
        k--;        
    }
    for (int i = (k-1); i>=0; i--)
        printf("1 ");      
} 
