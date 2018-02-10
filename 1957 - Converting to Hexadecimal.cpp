#include <bits/stdc++.h>
using namespace std;

void printDig(int rem){
    if(rem == 10){
        cout<<"A";
    }else if(rem == 11){
        cout<<"B";
    }else if(rem == 12){
        cout<<"C";
    }else if(rem == 13){
        cout<<"D";
    }else if(rem == 14){
        cout<<"E";
    }else if(rem == 15){
        cout<<"F";
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
