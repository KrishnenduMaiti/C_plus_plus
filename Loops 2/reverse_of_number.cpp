#include<iostream>
using namespace std;
int main(){
    int x, count=0, t;
    cout<<"enter the number :- ";
    cin>>x;
    for(int i=1;x!=0;i++){
        count*=10;
        t=x%10;
        count+=t;
        x/=10;
    }
    cout<<"reverse number is :- "<<count;
    return 0;
}