#include<iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=n;i>=1;i--){
        for (int j=1;j<n+1;j++){
            if (j<i){
                cout<<" ";
            }
            else if(j>=i && j<=n){
                cout<<"*";
            }
            continue;
        }
        cout<<endl;
    }
}