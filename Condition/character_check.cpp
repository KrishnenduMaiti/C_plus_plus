#include<iostream>
using namespace std;
int main(){
    char x ;
    cout<<"enter any character :- ";
    cin>>x;
    int a =(int)x;
    if(a>=32&&a<=47||a>=91&&a<=95){
        cout<<"special character";
    }
    else if(a>=48&&a<=57){
        cout<<"Number";
    }
    else if(a>=65&&a<=90){
        cout<<"Upper case Alphabet";
    }
    else if(a>=97&&a<=122){
        cout<<"Lower case Alphabet";
    }
}