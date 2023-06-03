#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row;
    // cin>>col;
    col=row;
    for (int i=0;i<row;i++){
        for (int j=col;j>0;j--){
            cout<<"*";
        }
    col--;
    cout<<endl;
    }

    // for (int i=row;i>=1;i--){
    //     for (int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}