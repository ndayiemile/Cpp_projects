/*This cpp project is a scientific calculator with most of all basic functions.It uses conditional statement and logic to bring all these available functions..Enjoy!*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
int q,a,b,c,x,y,n,number[100],i=1;
double h,v;
cout<<"$$$$$$$$$$$Emile CALCULATOR$$$$$$$$$$$";
cout<<"                  MODEs              ";
cout<<"                       -----         "<<endl;
cout<<"1:SCIENTIFIC Mode"<<endl;
cout<<"2:EQUATIONs Mode"<<endl;
cout<<"3:BASE system"<<endl;
cout<<"           Enter desired mode: ";
cin>>c;
switch(c){  
case 1:
 cout<<"1:Arithmetic operations"<<endl;    
 cout<<"2:Trigonometric functions"<<endl;  
 cout<<"3:Logarithmic functions"<<endl;    
 cout<<"4:Exponent functions"<<endl;    
 cout<<"         Enter the type of function:";
 cin>>q;
 switch(q){
    case 1: cout<<"**********ARITHIMETIC.OPERATIONS**********";
cout<<"1:Additive functions"<<endl;
cout<<"2:Multiplicative functions"<<endl;
cout<<"          Enter function type: ";
cin>>c;
switch(c){
 case 1:
 cout<<"Enter 1st number: ";
 cin>>h;
 cout<<"Enter 2nd number: ";
 cin>>v;
 cout<<"sum        = "<<h+v<<endl;
 cout<<"Difference ="<<h-v<<endl;
break;
 case 2:
cout<<"Enter the 1st number: ";
cin>>h;
cout<<"Enter the 2nd number: ";
cin>>v;
 cout<<"Product    ="<<h*v<<endl;
 cout<<"Quotient   ="<<setprecision(10)<<fixed<<h/v<<endl;
}
   break;
    case 2:
cout<<"***********TRIGONOMETRICFUNCTIONS*********";
cout<<"       -----CHOOSE INPUT FORMAT-----"<<endl;
cout<<"1:DEGREEs\t";
cout<<"2:RADIANs\t";
cout<<"3:GRADEs\t";
cout<<"                Enter format:";
cin>>a;
switch(a){
case 1:
cout<<"1:sin,cos,tan functions"<<endl;
cout<<"2:cosc,sec,cotan functions"<<endl;
cout<<"3:sin,cos,tan inverse functions"<<endl;
cout<<"              Enter your choice: ";
cin>>c;
switch(c){
case 1:
cout<<"Enter degrees:";
cin>>v;
h=v*0.01746;
cout<<"Sine     ="<<sin(h)<<endl;
cout<<"Cosine   ="<<cos(h)<<endl;
cout<<"Tangent  ="<<tan(h)<<endl;
break;
case 2:
cout<<"Enter degrees:";
cin>>v;
h=v*0.01746;
cout<<"cosecant ="<<1/sin(h)<<endl;
cout<<"Secantant="<<1/cos(h)<<endl;
cout<<"Cotangent="<<1/tan(h)<<endl;                
break;
case 3:
cout<<"Enter the number:";
cin>>v;
cout<<"Arc sine   ="<<asin(v)*57.2728<<endl;
cout<<"Arc cosine ="<<acos(v)*57.2728<<endl;
cout<<"Arc tangent="<<atan(v)*57.2728<<endl;
}
break;                
case 2:
cout<<"1:sin,cos,tan functions"<<endl;
cout<<"2:cosc,sec,cotan functions"<<endl;
cout<<"3:sin,cos,tan inverse functions"<<endl;
cout<<"              Enter your choice: ";
cin>>c;
switch(c){
case 1:
cout<<"Enter Radians:";
cin>>v;
cout<<"Sine     ="<<sin(v)<<endl;
cout<<"Cosine   ="<<cos(v)<<endl;
cout<<"Tangent  ="<<tan(v)<<endl;
break;
case 2:
cout<<"Enter Radians:";
cin>>v;
cout<<"cosecant ="<<1/sin(v)<<endl;
cout<<"Secantant="<<1/cos(v)<<endl;
cout<<"Cotangent="<<1/tan(v)<<endl;                
break;
case 3:
cout<<"Enter the number:";
cin>>v;
cout<<"Arc sine   ="<<asin(v)<<endl;
cout<<"Arc cosine ="<<acos(v)<<endl;
cout<<"Arc tangent="<<atan(v)<<endl;
}               
break;                
case 3:
cout<<"1:sin,cos,tan functions"<<endl;
cout<<"2:cosc,sec,cotan functions"<<endl;
cout<<"3:sin,cos,tan inverse functions"<<endl;
cout<<"              Enter your choice: ";
cin>>c;
switch(c){
case 1:
cout<<"Enter Grades:";
cin>>v;
h=v*22/7/200;
cout<<"Sine     ="<<sin(h)<<endl;
cout<<"Cosine   ="<<cos(h)<<endl;
cout<<"Tangent  ="<<tan(h)<<endl;
break;
case 2:
cout<<"Enter Grades:";
cin>>v;
h=v*22/7/200;
cout<<"cosecant ="<<1/sin(h)<<endl;
cout<<"Secantant="<<1/cos(h)<<endl;
cout<<"Cotangent="<<1/tan(h)<<endl;                
break;
case 3:
cout<<"Enter the number:";
cin>>v;
cout<<"Arc sine   ="<<asin(v)*63.662<<endl;
cout<<"Arc cosine ="<<acos(v)*63.662<<endl;
cout<<"Arc tangent="<<atan(v)*63.662<<endl;
}                               
}
break;
    case 3:{
cout<<"***********LOGARITHIMICFUNCTIONS**********";
cout<<"1:Decimal Logarithm\n";
cout<<"2:Natural Loharithm\n";
cin>>c;
switch(c){
 case 1:
   cout<<"Enter the number:";
   cin>>x;
   cout<<"Decimal Log ="<<setprecision(10)<<fixed<<log10(x)<<endl;
 break;
  case 2:
   cout<<"Enter the number:";
   cin>>x;
   cout<<"Natural Log ="<<setprecision(10)<<fixed<<log(x)<<endl;
  break;
  default:
 cout<<"*************INVALID INPUT**************";
       }
                }
break;          
    case 4:{
cout<<"*****************EXPONENTS****************";
cout<<"1:Exponents functions"<<endl;
cout<<"2:Square root function"<<endl;
cout<<"3:Cube root function"<<endl;
cout<<"4:a√(b power c)"<<endl;
cout<<"             Enter your choice:";
cin>>b;
switch(b){
 case 1:
cout<<"Enter the number:";
cin>>x;
cout<<"Enter power:";
cin>>y;
cout<<"Result ="<<setprecision(10)<<fixed<<pow(x,y)<<endl;
   break;
  case 2: 
cout<<"Enter the number:";
cin>>x;
cout<<"Square root is:"<<setprecision(10)<<fixed<<sqrt(x)<<endl;
   break;
case 3:
cout<<"Enter the number :";
cin>>c;
cout<<"cube root= "<<setprecision(10)<<fixed<<pow(c,0.33333333)<<endl;
break;
case 4:
cout<<"Enter a :";
cin>>h;
cout<<"Enter b :";
cin>>v;
cout<<"Enter c :";
cin>>c;
cout<<"The root="<<setprecision(10)<<fixed<<pow(v,(c/h))<<endl;
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
cout<<"1:Quadratic functions(ax2+bx+x=y)"<<endl;
cout<<"2:Linear equations(ax+b=c)"<<endl;
cout<<"3:Simultaneousequations"<<endl;
cout<<"(ax+by=c)&(a'x+b'y=c')"<<endl;
cout<<"           Enter your mode:";
cin>>c;
switch(c){
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
h=c-y;
 if((b*b-4*a*h)<0)
cout<<"No real roots";
else{
cout<<"First root ="<<(-b+sqrt(b*b-4*a*h))/(2*a)<<endl;
cout<<"Second root ="<<(-b-sqrt(b*b-4*a*h))/(2*a)<<endl;}
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
break;
case 3: 
cout<<"***************BASE SYSTEM****************"<<endl;
cout<<"1:Convert Base 10 to 2"<<endl;
cout<<"2:convert Base 10 to 8"<<endl;
cout<<"3:convert Base 10 to 16"<<endl;
cout<<"             Enter your choice: ";
cin>>a;
switch(a){
case 1:
cout<<"Enter Base 10 number: ";
cin>>n;
while(n!=0){
n=n/2;                
number[i++]=n%2;                                         
}           
cout<<number;         
break;
case 2:
cout<<"Enter Base 10 number: ";
cin>>n;
cout<<"Base 8 = "<<oct<<n<<endl;
break;
case 3:
cout<<"Enter Base 10 number:";
cin>>n;
cout<<"Base 16 is "<<hex<<n<<endl;
}
} 
return 0;          
} 
