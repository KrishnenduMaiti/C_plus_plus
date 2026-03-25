#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number : - ";
    cin>>n;
    for(i=3;n>0;i*=4){
        cout<<i<<endl;
        n--;
    }
}