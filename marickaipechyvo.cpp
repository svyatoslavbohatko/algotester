#include <stdio.h>


main(void)

{
    
	int a,b=0;

	long long c=0;
	scanf("%d", &a);
	for(int i = 0; i<a; i++)
    
	{
        
		scanf("%d", &b);
        
		c+=(b-1);
   
	}
    
	printf("%lld\n", c);
    	
	return 0;

}

