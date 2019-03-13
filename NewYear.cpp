#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
	double small = 0.0001;
	int count, N, M;
	double result;
	scanf ("%i %i", &N, &M);
	double value[M];
	for (int i = 0; i<M; i++)
	{
		scanf("%d", &value[i]);
		value[i]=(4*PI*pow(value[i],3))/3;
	}
	double max = value[0];
	double min = 0;
	for(int i = 0; i<M; i++)
	{
		if (value[i>max]){
			max = value[i];
		}
	}
	while ((max-min)>=small){
		double mid = (max+min)/2;
		for (int i = 0; i<M; i++){
			count +=(value [i]/mid);
		}
		if (count >=N){
			min = mid;
			result = mid;
		}
		if (count<N){
			max = mid;
		}
		count = 0;
	}
	printf("%d", result*N);	
}
