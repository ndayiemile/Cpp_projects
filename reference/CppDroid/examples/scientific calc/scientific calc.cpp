#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int x,y,q,a,b;
cout<<"$$$$$$$$$$$SCIENTIFC CALCULATOR$$$$$$$$$$$";
 cout<<"1:Arithmetic operations            ";
    
 cout<<"       2:Trigonometric functions          ";
    
 cout<<"       3:Logarithmic functions            ";
    
 cout<<"       4:Exponent functions               ";
    
 cout<<"       Enter the type of function:";
 cin>>q;
 switch(q){
    case 1:
 cout<<"**********ARITHIMETIC.OPERATIONS***********";
 cout<<"Enter x";;
 cin>>x;
 cout<<"Enter y:";
 cin>>y;
 cout<<"sum        = "<<x+y<<endl;
 cout<<"Difference ="<<x-y<<endl;
 cout<<"Product    ="<<x*y<<endl;
 cout<<"Quotient   ="<<x/y<<endl;
   break;
    case 2:
cout<<"***********TRIGONOMETRICFUNCTIONS*********";
  cout<<"Enter x:";
  cin>>x;
    cout<<"Sine     ="<<sin(x)<<endl;
    cout<<"Cosine   ="<<cos(x)<<endl;
    cout<<"Tangent  ="<<tan(x)<<endl;
    cout<<"cosecant ="<<asin(x)<<endl;
    cout<<"Secantant="<<acos(x)<<endl;
    cout<<"Cotangent="<<atan(x)<<endl;
   break;
    case 3:{
cout<<"***********LOGARITHIMICFUNCTIONS***********";
cout<<"1:Decimal Logarithm";
cout<<"2:Natural Loharithm";
cin>>a;
switch(a){
 case 1:
   cout<<"Enter the number:";
   cin>>x;
   cout<<"Decimal Log ="<<log10(x)<<endl;
 break;
  case 2:
   cout<<"Enter the number";
   cin>>x;
   cout<<"Natural Log ="<<log(x)<<endl;
  break;
  default:
 cout<<"*************INVALID INPUT**************";
       }
                }
    case 4:{
cout<<"*****************EXPONENTS*****************";
cout<<"1:Exponents functions";
cout<<"2:Square root functions";
cout<<"Enter your choice:";
cin>>b;
switch(b){
 case 1:
cout<<"Enter the number:";
cin>>x;
cout<<"Enter power:";
cin>>y;
cout<<"Result ="<<pow(x,y)<<endl;
   break;
  case 2: 
cout<<"Enter the number:";
cin>>x;
cout<<"Square root is:"<<sqrt(x)<<endl;
   break;
   default:
  cout<<"INVALID INPUT";
  }
  }
 break;
  default:
cout<<"=============INVALID INPUT=============="; 
 }
 }
 
   
