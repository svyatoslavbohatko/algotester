#include <stdio.h>
#include <math.h>

int main(void)
{
    float r, h;
    scanf("%f %f", &r, &h);
    float v, s;
    v = (4.0/3.0)*M_PI*pow(r,3)+(h-2*r)*M_PI*pow(r,2);
    s = 4*M_PI*pow(r, 2) + (h-2*r)*2*M_PI*r;
    printf("%.7f %.7f\n", v, s);
    
}
