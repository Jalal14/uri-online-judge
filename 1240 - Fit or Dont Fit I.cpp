#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b;
    bool notFit;
    cin>>n;
    while(n--){
        cin>>a>>b;
        notFit = false;
        while(b!=0){
            if(a%10!=b%10){
                notFit = true;
                break;
            }
            a/=10;
            b/=10;
        }
        if(notFit){
            cout<<"nao encaixa\n";
        }else{
            cout<<"encaixa\n";
        }
    }
}
