#include <stdio.h>

int main(void)
{
    int h,w, count = 0;
    scanf("%i %i", &h, &w);
    int a[h][w];
    for (int i = 0; i<h; i++)
    {
        for (int j=0; j<w; j++)
        {
            scanf("%i", &a[i][j]);
            count+=a[i][j];
        }
    }
    printf("%d\n", count);

    for (int i =(h-1); i>=0; i--)
    {
        for (int j=(w-1); j>=0; j--)
        {
            int s = a[i][j];
            if (a[i][j]==0)
                continue;
            else
            {
                while (s>0)
                {
                    printf("%d %d %d\n", i+1, j+1, s);
                    s--;
                }
            }
        }
    }
}
