#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int arr[4] = {A,B,C,D};
    int mxm,pos,temp;
    for(int i=0; i<4; i++){
        mxm = arr[i];
        pos=i;
        for(int j=i+1; j<4; j++){
            if(arr[j]>mxm){
                mxm = arr[j];
                pos=j;
            }
        }
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }
    if(arr[0] < arr[1] + arr[2]){
        cout<<"S"<<endl;
    }else if(arr[1] < arr[2] + arr[3]){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
}
