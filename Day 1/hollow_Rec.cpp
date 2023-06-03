#include<iostream>
using namespace std;
int main(){
    int l=10, b=8;
    for (int i=0;i<l;i++){
        for (int j=0;j<b;j++){
            if (i>0 && i<l-1){
                if (j==0 || j==b-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                continue;
            }
            cout<<"*";
        
        }
    cout<<endl;
    }
    return 0;
}