#include <bits/stdc++.h>
using namespace std;
long long int binToDec(string num);
long long int hexToDec(string num);
long long int decToDec(string num);
void decToBin(long long int num);
void DecToHex(long long int num);
void printDig(int rem);

int main()
{
    int n;
    long long int res;
    char digits[100],base[10];
    string num;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>digits>>base;
        string num = digits;
        cout<<"Case "<<i<<":\n";
        if(base[0] == 'b'){
            res = binToDec(num);
            cout<<res<<" dec"<<endl;
            DecToHex(res);
            cout<<" hex"<<endl;
        }else if(base[0] == 'h'){
            res = hexToDec(num);
            cout<<res<<" dec"<<endl;
            decToBin(res);
            cout<<" bin"<<endl;
        }else{
            res = decToDec(num);
            DecToHex(res);
            cout<<" hex"<<endl;
            decToBin(res);
            cout<<" bin"<<endl;
        }
        cout<<endl;
    }
}

long long int binToDec(string num){
    long long int sum = 0;
    for(int i=0; i<num.length(); i++){
        sum += (num[i]-48) * pow(2,num.length()-i-1);
    }
    return sum;
}

long long int decToDec(string num){
    long long int sum = 0;
    for(int i=0; i<num.length(); i++){
        sum = sum*10 + (num[i]-48);
    }
    return sum;
}

long long int hexToDec(string num){
    long long int sum = 0;
    for(int i=0; i<num.length(); i++){
        if(num[i]>= 65 && num[i]<=70){
            sum+= (num[i]-55) * pow(16,num.length()-i-1);
        }else if(num[i]>= 97 && num[i]<=102){
            sum+= (num[i]-87) * pow(16,num.length()-i-1);
        }else{
            sum+= (num[i]-48) * pow(16,num.length()-i-1);
        }
    }
    return sum;
}

void decToBin(long long int num){
    if(num/2==0){
        cout<<"1";
        return;
    }
    decToBin(num/2);
    cout<<num%2;
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
    if(rem>9){
        char r = rem+87;
        cout<<r;
    }else{
        cout<<rem;
    }
}

