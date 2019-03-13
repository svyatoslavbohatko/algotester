#include <stdio.h>
#include <math.h>
#include <bits/stdc++.h> 
#include <iostream>
#define _USE_MATH_DEFINES
//#define PI 3.14
using namespace std;


    int main() {
        double small=0.0001;
        int count;
        double result;
        double N;int M;
        cin>>N>>M;
        double value[M];
        for(int i=0;i<M;i++){
            cin>>value[i];
            value[i]=(4*M_PI*pow(value[i],3))/3;
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
        printf ("%.10f\n", result*N);
//        cout<<result*N;
    }

