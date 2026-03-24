#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the two number : ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is the greatest";
    }
    else if(a==b){
        cout<<"both are equal";
    }
    else if(a<b){
        cout<<b<<" is the greatest";
    }
}