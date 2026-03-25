#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // for(int i=2;i<x;i++){
    //     if(x%i==0){
    //         cout<<"Not Prime";
    //         break;
    //     }
    //     else{
    //         cout<<"Prime";
    //     }
    // }

    for(int i=2;i<x;i++){
        if(x%i==0){
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}