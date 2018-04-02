#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C,n,*arr,counter;
    long long int sum;
    cin>>C;
    while(C--){
        sum = counter = 0;
        cin>>n;
        arr = new int[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        double avg = sum/n;
        for(int i=0; i<n; i++){
            if(arr[i]>avg){
                counter++;
            }
        }
        double per = counter / (double) n * 100;
        cout<<fixed<<setprecision(3)<<per<<"%"<<endl;
    }
}

