#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,ans;
    while(cin>>A && A!=0 && cin>>B && B>0 && cin>>C && C>0){
        ans=sqrt(A*B*100/C);
        cout<<ans<<endl;
    }
}
