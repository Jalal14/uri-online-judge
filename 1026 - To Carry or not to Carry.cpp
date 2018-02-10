#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int n,k;
    while(cin>>n && getchar() != EOF && cin>>k){
        cout<<(n^k)<<endl;
    }
    return 0;
}
