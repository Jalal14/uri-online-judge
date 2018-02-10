#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=0; i<3; i++){
        string crow;
        int sum=0;
        while(getline(cin,crow) && crow!="caw caw"){
            for(int j=0; j<3; j++){
                if(crow[j]=='-'){
                    sum += pow(2,j) * 0;
                }else if(crow[j]=='*'){
                    sum += pow(2,2-j) * 1;
                }
            }
        }
        cout<<sum<<endl;
    }
}
