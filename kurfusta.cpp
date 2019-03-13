#include <iostream>
using namespace std;
int main() {
    int N,counter=0;
    cin>>N;
    string s[N];
    for (int i = 0; i < N; ++i) {
        cin>>s[i];
        if (s[i]=="In") counter++;
        if (s[i]=="Out") counter--;
        if (counter==-1)
        {
            cout<<"Error";
            break;
        }

    }
    if(counter>=1) cout<<"Cunning elector";
    if(counter==0) cout<<"Just a fantasy";
    return 0;
}