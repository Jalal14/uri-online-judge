#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[103][103];
    int N;
    while(cin>>N && getchar()!=EOF){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(i==N/2 && j==N/2){
                    arr[i][j]=4;
                }else if(i>=N/3 && j>=N/3 && i<=N-(N/3)-1 && j<=N-(N/3)-1){
                    arr[i][j]=1;
                }else if(i+j==N-1){
                    arr[i][j]=3;
                }else if(i==j){
                    arr[i][j]=2;
                }
                else{
                    arr[i][j]=0;
                }
            }
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
