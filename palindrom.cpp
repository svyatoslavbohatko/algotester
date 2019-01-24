#include <stdio.h>
#include <string.h>

int main (void)
{
    char str[100000];
    scanf("%[^\n]%*c", str);
    int length = strlen(str), count[26] = {0}, c=0, x, lik[26]={0}, i=0, j;
    bool pal;
    while (str[c] != '\0')
    {
        if ((str[c]>='a') && (str[c]<='z'))
        {
            x = str[c]-'a';
            count[x]++;
        }
        c++;
    }

    int z = 0;
    for (c = 0; c < 26; c++)
    {
        if ((count[c]%2) != 0)
            z++;
    }    
    if (z>1)
        printf("NO\n");
    else if ((z==0) || (z==1))
        printf("YES\n");
    
}




