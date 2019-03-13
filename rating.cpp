#include <stdio.h>

int main (void)
{
    int x,y,z,vidp;
    scanf("%i %i %i", &x, &y, &z);
    if ((x+y)<z)
        printf("%i", x+y);
    else if (((x+y)>z) && (z>(x-y)))
        printf("%i", z);
    else if ((x-y)>z)
        printf ("-1");
}
