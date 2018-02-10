#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        char f[10],s[10];
        cin>>f;
        cin>>s;
        if(strcmp(f,"ataque")==0 && strcmp(s, "pedra")==0){
            cout<<"Jogador 1 venceu";
        }else if(strcmp(s,"ataque")==0 && strcmp(f, "pedra")==0){
            cout<<"Jogador 2 venceu";
        }
        else if(strcmp(f,"pedra")==0 && strcmp(s, "papel")==0){
            cout<<"Jogador 1 venceu";
        }else if(strcmp(s,"pedra")==0 && strcmp(f, "papel")==0){
            cout<<"Jogador 2 venceu";
        }
        else if(strcmp(f,"ataque")==0 && strcmp(s, "papel")==0){
            cout<<"Jogador 1 venceu";
        }else if(strcmp(s,"ataque")==0 && strcmp(f, "papel")==0){
            cout<<"Jogador 2 venceu";
        }
        else if(strcmp(f,"papel")==0 && strcmp(s, "papel")==0){
            cout<<"Ambos venceram";
        }else if(strcmp(s,"pedra")==0 && strcmp(f, "pedra")==0){
            cout<<"Sem ganhador";
        }else if(strcmp(s,"ataque")==0 && strcmp(f, "ataque")==0){
            cout<<"Aniquilacao mutua";
        }
        cout<<endl;
    }
}
