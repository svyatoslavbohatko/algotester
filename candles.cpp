#include <stdio.h>
#include <bits/stdc++.h> 
#include <iostream>

using namespace std;


    int main() {
        double small=0.0000001;
        int count;
        double result;
        int N, M;
        cin>>N>>M;
        double value[M];
        for(int i=0;i<M;i++){
            cin>>value[i];

        }
        double max=value[0];
        double min=0;
        for(int i=0;i<M;i++){
            if(value[i]>max){
                max=value[i];
            }
        }
        while(max-min>=small){
            double mid=(max+min)/2;
            for(int i=0;i<M;i++){
                count+=(value[i]/mid);
            }
            if(count>=N){
                min=mid;
                result=mid;
            }
            if(count<N){
                max=mid;
            }
            count=0;
        }
        printf ("%.7f\n", result);
    }

