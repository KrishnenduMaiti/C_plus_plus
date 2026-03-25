#include<iostream>
using namespace std;
int main(){
    int n,fact=1,fact1=1;
    cout<<"enter the number :- ";
    cin>>n;
    // to calculate the factorial of a number we can use this loop
    for(int i=n;i>0;i--){
        fact *=i;
    }
    cout<<"factorial = "<<fact<<endl;

    // if we want to print the factorial of each number from 1 to n then we can use this loop
    for(int i=1;i<=n;i++){
        fact1 *=i;
        cout<<i<<"! = "<<fact1<<endl;
    }
    return 0;
}
