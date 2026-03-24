#include<iostream>
using namespace std;
int main(){
    float x1, y1, x2, y2, x3, y3;
    cout<<"enter first point :- ";
    cin>>x1>>y1;
    cout<<"enter second point :- ";
    cin>>x2>>y2;
    cout<<"enter third point :- ";
    cin>>x3>>y3;
    float a, b;
    a = (y1-y2)/(x1-x2);
    b = (y2-y3)/(x2-x3);
    if(a==b){
        cout<<"the points are in straight";
    }
    else{
        cout<<"the points are not in straight";
    }
}