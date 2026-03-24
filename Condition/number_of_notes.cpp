#include<iostream>
using namespace std;
int main(){
    int amount, a, b, c, d, e, f, g;
    cout<<"enter the amount :- ";
    cin>>amount;
    if(amount>0){
        if(amount>=500){
            a=amount/500;
                cout<<"notes of 500 = "<<a<<endl;
            amount=amount-(a*500); 
        }
        if(amount>=100){
            b=amount/100;
                cout<<"notes of '100' = "<<b<<endl;
            amount=amount-(b*100);
        }
        if(amount>=50){
            c=amount/50;
                cout<<"notes of '50' = "<<c<<endl;
            amount=amount-(c*50);
        }
        if(amount>=20){
            d=amount/20;
                cout<<"notes of '20' = "<<d<<endl;
            amount=amount-(d*20);
        }
        if(amount>=10){
            e=amount/10;
                cout<<"notes of '10' = "<<e<<endl;
            amount=amount-(e*10);
        }
        if(amount>=5){
            f=amount/5;
                cout<<"notes of '5' = "<<f<<endl;
            amount=amount-(f*5);
        }
        if(amount>=2){
            g=amount/2;
                cout<<"notes of '2' = "<<g<<endl;
            amount=amount-(g*2);
        }
        if(amount==1){
                cout<<"notes of '1' = 1"<<endl;
        }
    }
    else if(amount==0){
        cout<<"there is no amount";
    }
}