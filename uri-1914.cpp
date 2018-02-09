#include <bits/stdc++.h>
using namespace std;

int main()
{
    int QT;
    cin>>QT;
    while(QT--){
        char n1[101],n2[101],c1[6],c2[6];
        long long int p1,p2;
        cin>>n1>>c1>>n2>>c2;
        cin>>p1>>p2;
        if((p1+p2) % 2 == 0){
            if(strcmp(c1,"PAR") == 0){
                cout<<n1<<endl;
            }else{
                cout<<n2<<endl;
            }
        }else{
            if(strcmp(c1,"IMPAR") == 0){
                cout<<n1<<endl;
            }else{
                cout<<n2<<endl;
            }
        }
    }
}
