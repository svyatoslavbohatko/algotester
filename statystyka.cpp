#include <stdio.h>
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main(void)
{
    long n, m,k;
    
    cin>>n;
    long a[n];
    if (n!=0)
    {
        for (long i = 0; i<n; i++)
        {
            cin>>a[i];
        }
    }
    
    cin>>m;
    long b[m];
    if(m!=0)
    {
        for (long i = 0; i<m; i++)
        {
            cin>>b[i];
        }
    }
    
    cin>>k;
    long sum[n*m];
    long q = 0;
    for (long i = 0; i<n; i++)
    {
        for (long j = 0; j<m; j++)
        {
            sum[q]=a[i]+b[j];
            q++;
        }
    }
    sort(sum, sum+(n*m));  
    if ((n!=0) && (m!=0)) cout<<sum[k-1]<<"\n";
    else if ((n!=0) && (m==0)) 
    {
        sort (a, a+n);
        cout<<a[k-1]<<"\n";
    }
    else if ((n==0) && (m!=0)) 
    {
        sort(b, b+m);
        cout<<b[k-1]<<"\n";
    }
    }
