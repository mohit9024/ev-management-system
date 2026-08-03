// // // #include<iostream>
// // // using namespace std;

// // // struct Student{

// // //     string name;
// // //     string branch ;
// // //     int rollNumber;
// // //     char section; 

// // //     void details(){
// // //     cout <<"The name of Student is =  "<< name<<endl;
// // //     cout <<"The branch of Student is =  "<<  branch<<endl;
// // //     cout <<"The Roll Number of Student is =  "<<  rollNumber<<endl;
// // //     cout <<"The Section of Student is =  "<<  section<<endl;
// // //     }

// // // };

// // // int main(){
// // //     Student s1; // this is an Object 
// // //     s1.name = "Test Student";
// // //     s1.branch = "CSE";
// // //     s1.rollNumber = 001;
// // //     s1.section = 'C'; 
    

// // //     s1.details();


// // // }















// // #include<iostream>
// // using namespace std ;

// // struct Calculater{

// //     int a , b ;

// //     void sum (){
// //         cout << "Sum is : "<<a+b<<endl;
// //     }

// //     void sub (){
// //         cout<<"Sub is :"<<a-b<<endl;
// //     }

// //     void multipliy (){
// //         cout<<"Multiplication is :"<<a*b<<endl;
// //     }

// //     void divide(){
// //         if(b!= 0){
// //                 cout <<"Division is :" << (float)a/b <<endl;
// //         }else{
// //                 cout<<"Division by 0 is not defined"<<endl;
// //         }
// //     }




// // };

// // int main (){

// //     Calculater c ; 

// //     int choice ;

// //     cout << "1 . Sum" ; 
// //     cout << "2 . sub" ; 
// //     cout << "3 . multiply" ; 
// //     cout << "4 . division" ; 

// //     cout <<"Enter the choice :";
// //     cin>> choice; 


// //     switch (choice){

// //         case 1 :
// //         c.sum();
// //         break ; 

// //         case 2 :
// //         c.sub();
// //         break ; 

// //         case 3 :
// //         c.multipliy();
// //         break ; 

// //         case 4 :
// //         c.divide();
// //         break ; 

// //         default:
// //         cout <<"invalid choice :"; 
// //         break;


// //     }



// //     cout <<"Enter first number"<<endl;
// //     cin>>c.a; 
// //     cout <<"Enter second number"<<endl;
// //     cin>>c.b;


// // }
// #include<iostream>
// using namespace std ;   
// class Abc{
//     public:
//     int a =20;
//     void display(){
//         cout<<"The value of a is : "<<a<<endl;
//     }

// };
// int main(){
//     Abc obj;
//     obj.display();
// }



#include<iostream>
using namespace std ;
class absolute{
    public:
    int abs(int a){
        if(a<0){
            return -a;
        }else{
            return a;
        }
    }
};
 int main(){
    absolute obj;
    int a;
    cout<<"enter a value of a :";
    cin>>a;
    
    cout<<"the absolute value of an integar is ="<<obj.abs(a)<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
 }