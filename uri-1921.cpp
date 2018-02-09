#include <bits/stdc++.h>
using namespace std;

unsigned long long int kites(unsigned long long int n){
    if(n==3){
        return 0;
    }else{
        return kites(n-1)+n-2;
    }
}

int main()
{
    unsigned long long int N;
    cin>>N;
    cout<<kites(N)<<endl;
}
