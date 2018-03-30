#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0,T,A;
    cin>>T;
    for(int i=0; i<5; i++){
        cin>>A;
        if(A==T){
            res++;
        }
    }
    cout<<res<<endl;
}
