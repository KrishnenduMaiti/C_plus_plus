#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter the sides of the triangle : "<<endl<<"1st side :- ";
    cin>>a;
    cout<<"2nd side :- ";
    cin>>b;
    cout<<"3rd side :- ";
    cin>>c;
    if(a+b>c&&b+c>a&&a+c>b){
        cout<<"triangle is possible and ";
        if(a==b==c){
            cout<<"it's an equilateral triangle";
        }
        else if(a==b || b==c || a==c){
            cout<<"it's a scalene triangle";
        }
        else if(a!=b!=c){
            cout<<"it's an iaoscalene triangle";
        }
    }
    else{
        cout<<"triangle is not possible by this sides";
    }
}