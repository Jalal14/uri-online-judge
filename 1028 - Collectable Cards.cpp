#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,temp,s;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a<b){
            temp=a;
            a=b;
            b=temp;
        }
        while(a%b!=0){
            temp=a;
            a=b;
            b=temp%b;
        }
        cout<<b<<endl;
    }
}
