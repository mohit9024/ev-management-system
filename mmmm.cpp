#include<iostream>
using namespace std ;
class absolute{
    public:
    int abs(int a){
        if(a<0){
            return -a;
        }else{
            return a;
        }}
    float abs(float b){
        if(b<0){
            return -b;
        }else{
            return b  ;
        };
    }
    double abs(double c){
        if(c<0){
            return -c;
        }else{
            return c;
        };
      
}
 int main(){
    absolute obj;
    int a;
    cout<<"enter a value of a :";
    cin>>a;
    float b;
    cout<<"enter a value of b :";
    cin>>b;
    double c;
    cout<<"enter a value of c:";
    cin>>c;
    cout<<"the absolute value of an integar is ="<<obj.abs(a)<<endl;
    cout<<"the absolute value of a float is ="<<obj.abs(b)<<endl;
    cout<<"the absolute value of a double is ="<<obj.abs(c)<<endl;
    }
}; 