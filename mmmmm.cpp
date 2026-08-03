#include<iostream>
using namespace std ;
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    float add(float a,float b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
};
int main(){
    calculator obj;
    int a,b;
    cout<<"enter a value of a :";
    cin>>a;
    cout<<"enter a value of b :";
    cin>>b;
    cout<<"the addition of two integar is ="<<obj.add(a,b)<<endl;
}