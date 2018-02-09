#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,n,mnm,pos;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>n;
        if(i==0){
            mnm=n;
            pos = i+1;
        }
        if(n==0){
            pos = i+1;
            break;
        }
        if(n<mnm){
            pos = i+1;
        }
    }
    cout<<pos<<endl;
}
