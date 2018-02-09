#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int q = a/b;
    int r = a - b*q;
    if(r<0){
        if(b>0){
            q--;
            r+=b;
        }else{
            q++;
            r-=b;
        }
    }
    cout<<q<<" "<<r<<endl;
}
