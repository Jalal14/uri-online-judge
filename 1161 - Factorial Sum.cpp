#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int num){
    if(num<=1){
        return 1;
    }
    return num*fact(num-1);
}

int main()
{
    int M,N;
    while(cin>>M && cin>>N && getchar()!= EOF){
        cout<<fact(M)+fact(N);
    }
}
