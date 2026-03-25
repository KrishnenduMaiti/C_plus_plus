#include<iostream>
using namespace std;
int main(){
    int n,t=0;
    cout<<"enter the number :- ";
    cin>>n;
    for(int i=1;n>0;i++){
        if((n%10)%2==0) 
            t+=(n%10);
        n/=10;
    }
    cout<<t;
    return 0;
}