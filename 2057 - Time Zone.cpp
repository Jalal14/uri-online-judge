#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S,T,F,res;
    cin>>S>>T>>F;
    res = S+T+F;
    if(res>23){
        cout<<res-24;
    }else if(res < 0){
        cout<<24+res;
    }else{
        cout<<res;
    }
    cout<<endl;
}
