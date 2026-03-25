#include<iostream>
using namespace std;
int main(){
    int n,m=0,x;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of column: ";
    cin>>x;
    cout<<endl;
    // for roof
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=x;k++){
            cout<<"--";
        }
        for(int l=1;l<=m;l++){
            cout<<"  ";
        }
        m+=2;
        for(int o=1;o<=1;o++){
            cout<<"--";
        }
        cout<<endl;
    }
    m-=2;
    // for mid body
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=x;j++){
            cout<<"||";
        }
        for(int k=1;k<=m;k++){
            cout<<"  ";
        }
        for(int o=1;o<=1;o++){
            cout<<"||";
        }
        cout<<endl;
    }
    // for door level body
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=x;j++){
            cout<<"||";
        }
        for(int k=1;k<=m/3;k++){
            cout<<"  ";
        }
        for(int l=1;l<=m/3;l++){
            cout<<"||";
        }
        for(int p=1;p<=m-(2*(m/3));p++){
            cout<<"  ";
        }
        for(int o=1;o<=1;o++){
            cout<<"||";
        }
        cout<<endl;
    }
    for(int i=1;i<=x+m+1;i++){
        cout<<"--";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}