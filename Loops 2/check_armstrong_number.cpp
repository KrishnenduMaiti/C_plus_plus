#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :- ";
    cin>>n;
    int t=n;
    int original=n;
    int flag=0;
    for(int i=0;n!=0;i++){
        n/=10;
        flag+=1;
    }

    int m=0;
    while(t>0){
        int x=1;
        for(int i=1;i<=flag;i++){
            x*=t%10;
        }
        m += x;
        x=1;
        t /= 10;
    }
    if(original==m) cout<<"armstrong number";
    else cout<<"not an armstrong number";
    return 0;
}