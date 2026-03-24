#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter the marks of A :- "<<endl;
    cin>>a;
    cout<<"enter the number of B :- "<<endl;
    cin>>b;
    cout<<"enter the marks of C :- "<<endl;
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"A is the least ";
        }
        else{
            cout<<"C is the least ";
        }
    }
    else if(a>b){
        if(b<c){
            cout<<"b is the least ";
        }
        else{
            cout<<"C ic the least ";
        }
    }
}