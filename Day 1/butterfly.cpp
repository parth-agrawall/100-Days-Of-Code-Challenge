#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int diff;
    for (int i=1;i<=n ; i++){
        for (int j=1;j<=2*n; j++){
            diff=2*n-i;
            if(j<=i || j>diff){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for (int i=n;i>=1 ; i--){
        for (int j=1;j<=2*n; j++){
            diff=2*n-i;
            if(j<=i || j>diff){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}