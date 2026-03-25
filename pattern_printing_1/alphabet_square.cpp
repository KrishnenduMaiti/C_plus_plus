#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter the row size :- ";
    cin>>n;
    cout<<"enter the column size :- ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
	    cout<<char(j+65)<<" ";
	}
	cout<<endl;
    }
    return 0;
}
