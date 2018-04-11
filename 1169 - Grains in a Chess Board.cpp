#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,X;
    cin>>N;
    unsigned long long int amount;
    while(N--){
        cin>>X;
        if(X>63){
            amount = pow(2,X-1);
            cout<<amount/6000<<" kg"<<endl;
        }else{
            amount = pow(2,X);
            cout<<amount/12000<<" kg"<<endl;
        }
    }
}
