#include <bits/stdc++.h>
using namespace std;

void printDig(int rem){
    if(rem>9){
        char r = rem+55;
        cout<<r;
    }else{
        cout<<rem;
    }
}

void DecToHex(long long int n){
    if(n/16 == 0){
        printDig(n%16);
        return;
    }
    DecToHex(n/16);
    printDig( n%16);
}

int main()
{
    int n;
    cin>>n;
    DecToHex(n);
    cout<<endl;
}
