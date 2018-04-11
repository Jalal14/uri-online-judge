#include <bits/stdc++.h>
using namespace std;

void DecToHex(long long int n);
void printDig(int rem);
void convertToNum(string num);
void hexToDec(string num);

int main()
{
    string A;
    while(cin>>A && A[0]!='-'){
        if(A[1]=='x'){
            hexToDec(A);
        }else{
            cout<<"0x";
            convertToNum(A);
        }
        cout<<endl;
    }
}

void hexToDec(string num){
    long long int sum = 0;
    for(int i=2; i<num.length(); i++){
        if(num[i]>= 65 && num[i]<=70){
            sum+= (num[i]-55) * pow(16,num.length()-i-1);
        }else if(num[i]>= 97 && num[i]<=102){
            sum+= (num[i]-87) * pow(16,num.length()-i-1);
        }else{
            sum+= (num[i]-48) * pow(16,num.length()-i-1);
        }
    }
    cout<<sum;
}

void convertToNum(string num){
    long long int sum = 0;
    for(int i=0; i<num.length(); i++){
        sum = sum*10 + num[i]-48;
    }
    DecToHex(sum);
}

void DecToHex(long long int n){
    if(n/16 == 0){
        printDig(n%16);
        return;
    }
    DecToHex(n/16);
    printDig( n%16);
}

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
