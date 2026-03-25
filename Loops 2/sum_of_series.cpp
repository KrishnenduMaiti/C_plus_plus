#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of terms :- ";
    cin>>n;
    if(n%2==0){
        cout<<"sum of the series :- "<<-n/2;
    }
    else{
        cout<<"sum of the series :- "<<(-n/2)+n;
    }
    return 0;
}