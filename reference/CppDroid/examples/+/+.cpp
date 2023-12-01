#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int x,y,q,a,b,c;
cout<<"$$$$$$$$$$$SCIENTIFC CALCULATOR$$$$$$$$$$$";
cout<<"                  MODEs              ";
cout<<"                       -----         ";
cout<<"          1:SCIENTIFIC Mode                   ";
cout<<"      2:EQUATIONs Mode              ";
cout<<"            3:BASE system                 ";
cout<<"                     Enter desired mode: ";
cin>>c;
switch(c){  
case 1:
 cout<<"1:Arithmetic operations            ";
    
 cout<<"       2:Trigonometric functions          ";
    
 cout<<"       3:Logarithmic functions            ";
    
 cout<<"       4:Exponent functions               ";
    
 cout<<"              Enter the type of function:";
 cin>>q;
 switch(q){
    case 1:
 cout<<"**********ARITHIMETIC.OPERATIONS**********";
 cout<<"Enter 1st term: ";
 cin>>x;
 cout<<"Enter 2nd term: ";
 cin>>y;
 cout<<"sum        = "<<x+y<<endl;
 cout<<"Difference ="<<x-y<<endl;
 cout<<"Product    ="<<x*y<<endl;
 cout<<"Quotient   ="<<x/y<<endl;
   break;
    case 2:
cout<<"***********TRIGONOMETRICFUNCTIONS*********";
cout<<"1:sin,cos,tan functions              ";
cout<<"     2:cosc,sec,cotan functions      ";
cout<<"          3:sin,cos,tan inverse functions                   ";
cout<<"     Enter your choice: ";
cin>>y;
switch(y){
case 1:
cout<<"Enter the number:";
cin>>x;
cout<<"Sine     ="<<sin(x)<<endl;
cout<<"Cosine   ="<<cos(x)<<endl;
cout<<"Tangent  ="<<tan(x)<<endl;
break;
case 2:
cout<<"Enter the number:";
cin>>x;
cout<<"cosecant ="<<asin(x)<<endl;
cout<<"Secantant="<<acos(x)<<endl;
cout<<"Cotangent="<<atan(x)<<endl;                
   break;
case 3:
cout<<"Enter the number:";
cin>>a;
cout<<"Arc sine   ="<<asin(a)<<endl;
cout<<"Arc cosine ="<<acos(a)<<endl;
cout<<"Arc tangent="<<atan(a)<<endl;
}
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
cout<<"*****************EXPONENTS****************";
cout<<"1:Exponents functions                ";
cout<<"     2:Square root function          ";
cout<<"          3:Cube root function              ";
cout<<"        4:a√(b power c)                  ";
cout<<"                Enter your choice:";
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
case 3:
cout<<"Enter the number :";
cin>>c;
cout<<"cube root= "<<pow(c,1/3)<<endl;
break;
case 4:
cout<<"Enter a :";
cin>>a;
cout<<"Enter b :";
cin>>b;
cout<<"Enter c :";
cin>>c;
cout<<"The root="<<pow(b,c/a)<<endl;
break;
   default:
  cout<<"INVALID INPUT";
  }
  }
 break;
  default:
cout<<"=============INVALID INPUT=============="; 
 }
 break;
case 2:
cout<<"**************EQUATIONS MODE**************";
cout<<"1:Quadratic functions                ";
cout<<"     2:Linear equations              ";
cout<<"          3:Simultaneous equations        ";
cout<<"                       Enter your mode:";
cin>>x;
switch(x){
 case 1:{
 cout<<"     -----calcuration of roots----- ";
cout<<"      Enter variable a: ";
cin>>a; 
cout<<"Enter variable b: ";
cin>>b;
cout<<"Enter variable c: ";
cin>>c;
cout<<"Enter y:";
cin>>y;
q=c-y;
 if((b*b-4*a*q)<0)
cout<<"No real roots";
else{
cout<<"First root ="<<(-b+sqrt(b*b-4*a*q))/(2*a)<<endl;
cout<<"Second root ="<<(-b-sqrt(b*b-4*a*q))/(2*a)<<endl;}
        }
break;
 case 2:
cout<<"************EQUATION(aX+b=c)**************";
cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<<"Enter c: ";
cin>>c;
cout<<"x="<<(c-b)/a<<endl;
break;
 case 3: ;
cout<<"*******SIMULTANEOUS LINEAR EQUATION*******";
cout<<"Enter a :";
cin>>a;
cout<<"Enter b :";
cin>>b;
cout<<"Enter c :";
cin>>c;
cout<<"Enter a':";
cin>>x;
cout<<"Enter b':";
cin>>y;
cout<<"Enter c':";
cin>>q;
cout<<"Results are ("<<(c*y-q*b)/(a*y-x*b)<<","<<(a*q-x*c)/(a*y-x*b)<<")"<<endl;         
        
  }      
 }
 } 
