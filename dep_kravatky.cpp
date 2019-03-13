#include <stdio.h>
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;


    int main() {
        double small=0.0001;
        int count;
        double result;
        int N, M;
        cin>>N>>M;
        double value[N];
        for(int i=0;i<N;i++){
            cin>>value[i];

        }
        double max=value[0];
        double min=0;
        for(int i=0;i<N;i++){
            if(value[i]>max){
                max=value[i];
            }
        }
        while(max-min>=small){
            double mid=(max+min)/2;
            for(int i=0;i<N;i++){
                count+=(value[i]/mid);
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
        printf ("%.4f\n", result);
    }

