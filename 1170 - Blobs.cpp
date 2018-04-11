#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,counter;
    double X;
    cin>>N;
    while(N--){
        cin>>X;
        counter = 0;
        while(X>1){
            counter++;
            X/=2;
        }
        cout<<counter<<" dias"<<endl;
    }
}
