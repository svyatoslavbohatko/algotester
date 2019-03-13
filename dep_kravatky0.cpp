#include <stdio.h>
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin>>N>>M;
    int s[N];
    for (int i = 0; i < N; ++i) {
        cin>>s[i];
    }
    
    sort(s, s+N);
    
    double small=0.0001;
    double min = 0, max = s[N], result;
    int count;
    while ((max - min) >= small)
    {
        double mid = (max+min)/2;
            for(int i=0;i<N;i++){
                count+=(s[i]/mid);
            }
            if(count>=M){
                min=mid;
                result=mid;
            }
            if(count<M){
                max=mid;
            }
            count=0;
        }
    printf ("%f\n", result*M);
    }
    
