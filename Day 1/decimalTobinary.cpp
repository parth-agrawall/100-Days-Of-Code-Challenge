#include <iostream>
using namespace std;
void Binarys(int n){
    int arr[20];
    int j=0,i;
    for (i=n;i>0;i=i/2){
        arr[j]=i%2;
        j++;
    }
    for(j=j-1;j>=0;j--)
        cout<<arr[j];
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Binarys(n);
    cout<<endl;
}