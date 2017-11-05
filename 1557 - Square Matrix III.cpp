#include <bits/stdc++.h>
using namespace std;
int digit(int n){
    int d=0;
    while(n>0){
        d++;
        n/=10;
    }
    return d;
}
int main()
{
    int N,n;
    while(cin>>N && N!=0){
        int T=digit(pow(4,N-1));
        for(int i=1; i<=pow(2,N-1); i*=2){
            for(int j=i; j<=pow(2,N-1)*i; j*=2){
                cout<<setw(T)<<j;
                if(j<pow(2,N-1)*i){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
