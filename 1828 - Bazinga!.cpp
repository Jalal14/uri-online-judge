#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        char raj[10],sheld[10];
        cin>>raj;
        cin>>sheld;
        if(strcmp(raj,"tesoura")==0 && strcmp(sheld,"papel")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"tesoura")==0 && strcmp(raj,"papel")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"papel")==0 && strcmp(sheld,"pedra")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"papel")==0 && strcmp(raj,"pedra")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"pedra")==0 && strcmp(sheld,"lagarto")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"pedra")==0 && strcmp(raj,"lagarto")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"lagarto")==0 && strcmp(sheld,"Spock")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"lagarto")==0 && strcmp(raj,"Spock")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"Spock")==0 && strcmp(sheld,"tesoura")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"Spock")==0 && strcmp(raj,"tesoura")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"tesoura")==0 && strcmp(sheld,"lagarto")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"tesoura")==0 && strcmp(raj,"lagarto")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"lagarto")==0 && strcmp(sheld,"papel")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"lagarto")==0 && strcmp(raj,"papel")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"papel")==0 && strcmp(sheld,"Spock")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"papel")==0 && strcmp(raj,"Spock")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"Spock")==0 && strcmp(sheld,"pedra")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"Spock")==0 && strcmp(raj,"pedra")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj,"pedra")==0 && strcmp(sheld,"tesoura")==0){
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }else if(strcmp(sheld,"pedra")==0 && strcmp(raj,"tesoura")==0){
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(strcmp(raj, sheld)==0){
            cout<<"Caso #"<<i<<": De novo!"<<endl;
        }
    }
}
