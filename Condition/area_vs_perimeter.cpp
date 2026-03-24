#include<iostream>
using namespace std;
int main(){
    int x,y,a,p;
    cout<<"enter the length and breath : ";
    cin>>x>>y;
    a=x*y;
    p=2*(x+y);
    if(a>p){
        cout<<"area is larger";
    }
    else if(a<p){
        cout<<"perimeter is larger";
    }
    else if(a==p){
        cout<<"area amd perimeter is same";
    }
}
