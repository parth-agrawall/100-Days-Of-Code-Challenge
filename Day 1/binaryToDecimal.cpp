#include<iostream>
#include<math.h>
using namespace std;
void Decimals(int n){
    int r;
    int num = 0, i=0;
    // int lenN,j;
    // string strN;
    // strN = to_string(n);
    // lenN = strN.length();

    // for (int i=0; i<=lenN-1;i++){
    //     r = n%10;
    //     num += r* pow(2,i);
    //     n = n/10;
    //     // 1 0 1/10 = 
    //     // 1* 2^0
    //     // 101
    // }
    for (n=n;n>0;n/=10){
        r=n%10;
        num += r* pow(2,i);
        i++;
    }
    cout<<num<<endl;

}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Decimals(n);

}