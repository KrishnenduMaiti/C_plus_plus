#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row size :- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
	        if(i%2!=0) cout<<char(j+64)<<" ";//When row number is odd print character
            else cout<<j<<" ";
	    }
	    cout<<endl;
    }
    return 0;
}
