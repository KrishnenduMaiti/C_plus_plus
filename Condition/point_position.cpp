#include<iostream>
#include <chrono>
using namespace std;
int main(){
    auto start = chrono::steady_clock::now();
    int x, y;
    cout<<"enter the point :- ";
    cin>>x>>y;
    if(x==0&&y!=0){
        cout<<"point lies on y-axis";
    }
    else if(x!=0&&y==0){
        cout<<"point lies on x-axis";
    }
    else if(x==0&&y==0){
        cout<<"point lies at origin ";
    }
    else if(x!=0&&y!=0){
        cout<<"point lies on plane"<<endl;
    }
    chrono::seconds(150);
    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end - start);
    cout << "Execution time: " << duration.count() << " seconds" << endl;
}