#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C,N;
    cin>>C;
    while(C--){
        char name[20];
        cin>>name;
        cin>>N;
        if(strcmp(name, "Thor")==0){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
}
