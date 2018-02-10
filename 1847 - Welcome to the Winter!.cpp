#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A>B){
        if(B<=C){
            cout<<":)";
        }else if(B>C && A-B>B-C){
            cout<<":)";
        }else if(B>C && A-B<=B-C){
            cout<<":(";
        }
    }
    else if(A<B){
        if(B>=C){
            cout<<":(";
        }else if(B<C && B-A>C-B){
            cout<<":(";
        }else if(B<C && B-A<=C-B){
            cout<<":)";
        }
    }
    else{
        if(B<C){
            cout<<":)";
        }else{
            cout<<":(";
        }
    }
    cout<<endl;
}
