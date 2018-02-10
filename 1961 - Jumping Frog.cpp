#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pipes[101];
    int P,N;
    bool pass = true;
    cin>>P>>N;
    for(int i=0; i<N; i++){
        cin>>pipes[i];
        if(i>0){
            int dist = abs(pipes[i] - pipes[i-1]);
            if(dist > P){
                pass = false;
                break;
            }
        }
    }
    if(pass){
        cout<<"YOU WIN"<<endl;
    }else{
        cout<<"GAME OVER"<<endl;
    }
}
