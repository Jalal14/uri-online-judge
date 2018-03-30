#include <bits/stdc++.h>
using namespace std;

int main()
{
    float price[5][2] = {
                            1001,1.5,
                            1002, 2.5,
                            1003, 3.5,
                            1004, 4.5,
                            1005, 5.5
                        };
    int code, qnt, p;
    float sum=0;
    cin>>p;
    while(p--){
        cin>>code>>qnt;
        for(int i=0; i<5; i++){
            if(price[i][0] == code){
                sum+= price[i][1] * qnt;
                break;
            }
        }
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}
