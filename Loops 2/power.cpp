#include<iostream>
using namespace std;
int main(){
    int a, b;
    float result=1;
    cout<<"enter two numbers :- ";
    cin>>a>>b;
    if(b<0){
        for(int i=1;i>=b;i--){
            result *=a; 
        }
        result=1/result;
    }
    else{
        for(int i=1;i<=b;i++){
            result *=a;
        } 
    }
    cout<<"="<<result;
    return 0;
}