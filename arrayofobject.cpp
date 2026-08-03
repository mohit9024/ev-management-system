#include<iostream>
using namespace std;
int main(){
 int arr[4],i;
 int a,b,c,d;
 cout<<"Enter 4 numbers:"<<endl;
 cin>>a>>b>>c>>d;
 arr[0]=a;
 arr[1]=b;
 arr[2]=c;
 arr[3]=d;
 for( i=0;i<4;i++){
    cout<<arr[i]<<endl;
    if(arr[i]%2==0){
        cout<<arr[i]<<" is even number"<<endl;  
 }
 else{
    cout<<arr[i]<<" is odd number"<<endl;
 }
 }
}