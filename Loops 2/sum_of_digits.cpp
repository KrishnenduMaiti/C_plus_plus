#include<iostream>
using namespace std;
int main(){
    int x, count=0;
    cout<<"enter the number :- ";
    cin>>x;
    for(int i=1;x!=0;i++){
        count+=x%10;
        x/=10;
    }
    cout<<"sum of digits :- "<<count;
    return 0;
}