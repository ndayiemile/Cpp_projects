/*This cpp project is a scientific calculator with most of all basic functions.It uses conditional statement and logic to bring all these available functions..Enjoy!*/
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
int main(){
string secret="emile",mypassword,op;		
int q,a,b,c,ext,x,y,n,num1,num2,binarynumber[100],i=1,npr=1,ncr=1,j,ioforms[3];
long int decimalnumber,quotient,remainder;
double h,d,v;
password:
cout<<"please enter the password to continue using this app: ";
cin>>mypassword;	
if(mypassword==secret){
cout<<"           logged in successfully!       \n ";
restart:		
cout<<"$$$$$$$$$$$Emile CALCULATOR$$$$$$$$$$$\n";
cout<<"                  MODEs              \n";
cout<<"                ---------         "<<endl;
cout<<"1:SCIENTIFIC Mode"<<endl;
cout<<"2:EQUATIONs Mode"<<endl;
cout<<"3:BASE system"<<endl;
cout<<"4:CONVERSIONS"<<endl;
cout<<"           Enter desired mode: ";
cin>>c;
switch(c){  
case 1:
 cout<<"1:Arithmetic operations"<<endl;    
 cout<<"2:Trigonometric functions"<<endl;  
 cout<<"3:Logarithmic functions"<<endl;    
 cout<<"4:Exponent functions"<<endl; 
 cout<<"5:combinations and permutations"<<endl;   
 cout<<"         Enter the type of function:";
 cin>>q;
 switch(q){
    case 1: cout<<"**********ARITHIMETIC.OPERATIONS**********\n";

cout<<"Enter the operator next to the number then press ENTER next to = when you  are DONE; to get answer:\n";	
cin>>num1;
cin>>op;
repeat:	
if(op=="+"){
cin>>num2;	
num1+=num2;	
cin>>op;	
goto repeat;
}
else if(op=="-"){
cin>>num2;	
num1-=num2;	
cin>>op;	
goto repeat;	
}
else if(op=="/"){
cin>>num2;
num1/=num2;		
cin>>op;	
goto repeat;
}
	
else if(op=="*"){
cin>>num2;
num1*=num2;		
cin>>op;	
goto repeat;		
}
else if(op=="="){	
cout<<"The answer is "<<num1<<endl;	
}
else{
cout<<"MATH ERROR!";	
}	

cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}

break;
    case 2:
cout<<"***********TRIGONOMETRICFUNCTIONS*********\n";
cout<<"       -----CHOOSE INPUT FORMAT-----"<<endl;
cout<<"1:DEGREEs\t";
cout<<"2:RADIANs\t";
cout<<"3:GRADEs\n";
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
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 2:
cout<<"Enter degrees:";
cin>>v;
h=v*0.01746;
cout<<"cosecant ="<<1/sin(h)<<endl;
cout<<"Secantant="<<1/cos(h)<<endl;
cout<<"Cotangent="<<1/tan(h)<<endl;                
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 3:
cout<<"Enter the number:";
cin>>v;
cout<<"Arc sine   ="<<asin(v)*57.2728<<endl;
cout<<"Arc cosine ="<<acos(v)*57.2728<<endl;
cout<<"Arc tangent="<<atan(v)*57.2728<<endl;
}
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
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
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 2:
cout<<"Enter Radians:";
cin>>v;
cout<<"cosecant ="<<1/sin(v)<<endl;
cout<<"Secantant="<<1/cos(v)<<endl;
cout<<"Cotangent="<<1/tan(v)<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 3:
cout<<"Enter the number:";
cin>>v;
cout<<"Arc sine   ="<<asin(v)<<endl;
cout<<"Arc cosine ="<<acos(v)<<endl;
cout<<"Arc tangent="<<atan(v)<<endl;
}
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
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
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;                          
case 2:
cout<<"Enter Grades:";
cin>>v;
h=v*22/7/200;
cout<<"cosecant ="<<1/sin(h)<<endl;
cout<<"Secantant="<<1/cos(h)<<endl;
cout<<"Cotangent="<<1/tan(h)<<endl;                
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;                          
case 3:
cout<<"Enter the number:";
cin>>v;
cout<<"Arc sine   ="<<asin(v)*63.662<<endl;
cout<<"Arc cosine ="<<acos(v)*63.662<<endl;
cout<<"Arc tangent="<<atan(v)*63.662<<endl;
}                               
}
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;                          
    case 3:{
cout<<"***********LOGARITHIMICFUNCTIONS**********\n";
cout<<"1:Decimal Logarithm\t";
cout<<"2:Natural Loharithm\n";
cout<<"Enter your choice:";                              
cin>>c;           
switch(c){
 case 1:
   cout<<"Enter the number:";
   cin>>x;
   cout<<"Decimal Log ="<<setprecision(10)<<fixed<<log10(x)<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
  case 2:
   cout<<"Enter the number:";
   cin>>x;
   cout<<"Natural Log ="<<setprecision(10)<<fixed<<log(x)<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;

  default:
 cout<<"*************INVALID INPUT**************";
       }
                }
break;                   
    case 4:{
cout<<"*****************EXPONENTS****************\n";
cout<<"1:Exponents functions"<<endl;
cout<<"2:Square root function"<<endl;
cout<<"3:Cube root function"<<endl;
cout<<"4:function a power(c/b)"<<endl;
cout<<"             Enter your choice:";
cin>>b;
switch(b){
 case 1:
cout<<"Enter the number:";
cin>>x;
cout<<"Enter power:";
cin>>y;
cout<<"Result ="<<setprecision(10)<<fixed<<pow(x,y)<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
  case 2: 
cout<<"Enter the number:";
cin>>x;
cout<<"Square root is:"<<setprecision(10)<<fixed<<sqrt(x)<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 3:
cout<<"Enter the number :";
cin>>c;
cout<<"cube root= "<<setprecision(10)<<fixed<<pow(c,0.33333333)<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 4:
cout<<"Enter a :";
cin>>h;
cout<<"Enter b :";
cin>>v;
cout<<"Enter c :";
cin>>c;
cout<<"The root="<<setprecision(10)<<fixed<<pow(v,(c/h))<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
   default:
  cout<<"INVALID INPUT";
  }
  }
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 5:{
	cout<<endl;
	cout<<"Given format nPr and nCr \n";
	cout<<"Enter n,operator(P,C),r respectively\n";
	cin>>a>>op;
	if(op=="!"){
		for(int i=a;i>0;i--){
			npr*=i;
		}
		cout<<a<<"! = "<<npr<<endl;
	}else if(op=="C"){
		//not yet programmed 
	}else if(op=="P"){
		cin>>b;
			for(int i=a;i>0;i--){
			npr*=i;
		}
			for(int i=(a-b);i>0;i--){
			ncr*=i;
		}
		cout<<a<<" P "<<b<<" = "<<npr/ncr<<endl;
	}else{
		cout<<"=======invalid operand=======\n";
	}
	
  }
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;

  default:
cout<<"=============INVALID INPUT=============="; 
 }
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 2:
cout<<"**************EQUATIONS MODE**************\n";
cout<<"1:Quadratic functions(ax2+bx+c=y)"<<endl;
cout<<"2:Linear equations(ax+b=c)"<<endl;
cout<<"3:Simultaneous equations"<<endl;
cout<<"(ax+by=c)&(a'x+b'y=c')"<<endl;
cout<<"           Enter your mode:";
cin>>c;
switch(c){
 case 1:{
 cout<<"     -----calcuration of roots----- \n";
cout<<"Enter variable a: ";
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
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
 case 2:
cout<<"************EQUATION(aX+b=c)**************\n";
cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<<"Enter c: ";
cin>>c;
cout<<"x="<<(c-b)/a<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
 case 3: ;
cout<<"*******SIMULTANEOUS LINEAR EQUATION*******\n";
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
cout<<"Results are ("<<(c*y-q*b)/(a*y-x*b)<<","<<(a*q-c*x)/(a*y-x*b)<<")"<<endl;         
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;       
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
cin>>decimalnumber;
quotient=decimalnumber;
while(quotient!=0){
binarynumber[i++]=quotient%2;                
quotient=quotient/2;                                         
} 
cout<<"Base 2=",decimalnumber;
for(j=i-1;j>0;j--)        
cout<<binarynumber[j];
cout<<"\n";
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 2:
cout<<"Enter Base 10 number: ";
cin>>n;
cout<<"Base 8 = "<<oct<<n<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
case 3:
cout<<"Enter Base 10 number:";
cin>>n;
cout<<"Base 16 is "<<hex<<n<<endl;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;
}
case 4:
{
cout<<"1:Length"<<endl;
cout<<"2:Temperature"<<endl;
cout<<"3:Data"<<endl;
cout<<"4:Pressure"<<endl;
cout<<"5:Angles\n";
cout<<"           Enter desired mode: ";
cin>>c;
switch(c){  
case 1:
 cout<<"###########Length#########"<<endl; 
 cout<<"press:\n";  
 cout<<"1.mps\n";	
 cout<<"2.kmph\n";	
 cout<<"3.mph\n";	 
 cout<<"Enter the input format"<<endl;
 cin>>ioforms[1];
 cout<<"Enter the output format"<<endl; 
 cin>>ioforms[2];     
 cout<<"Enter the measures"<<endl;
 cin>>ioforms[3];
 cout<<"\n";
if((ioforms[1]==1)&(ioforms[2]==1) ){
d=ioforms[3];
cout<<d;
}
else if((ioforms[1]==1)&(ioforms[2]==2) ){
d=ioforms[3]*3.6;
cout<<d;
}	
else if((ioforms[1]==1)&(ioforms[2]==3) ){
d=ioforms[3]*2.237136;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==1) ){
d=ioforms[3]*0.27778;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==2) ){
d=ioforms[3];
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==3) ){
d=ioforms[3]*0.621427;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==1) ){
d=ioforms[3]*0.447;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==2) ){
d=ioforms[3]*1.6092;
cout<<d;
}
else{
d=ioforms[3];
cout<<d;
}
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;	
case 2:
cout<<"###########Temperature#########"<<endl; 
 cout<<"press:\n";  
 cout<<"1.Celsius\n";	
 cout<<"2.Kelvin\n";	
 cout<<"3.Fahrenhiet\n";	 
 cout<<"Enter the input format"<<endl;
 cin>>ioforms[1];
 cout<<"Enter the output format"<<endl; 
 cin>>ioforms[2];     
 cout<<"Enter the temperature"<<endl;
 cin>>ioforms[3];
 cout<<"\n";
if((ioforms[1]==1)&(ioforms[2]==1) ){
d=ioforms[3];
cout<<d;
}
else if((ioforms[1]==1)&(ioforms[2]==2) ){
d=ioforms[3]+273;
cout<<d;
}	
else if((ioforms[1]==1)&(ioforms[2]==3) ){
d=(ioforms[3]*9/5)+32;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==1) ){
d=ioforms[3]-273;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==2) ){
d=ioforms[3];
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==3) ){
d=(ioforms[3]*5/9)-459.67;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==1) ){
d=(ioforms[3]-32)*5/9;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==2) ){
d=(ioforms[3]*459.67)*5/9;
cout<<d;
}
else{
d=ioforms[3];
cout<<d;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;      	
}
break;		
case 3:
cout<<"###########Data#########"<<endl; 
 cout<<"press:\n";  
 cout<<"1.bytes\n";	
 cout<<"2.Kilobytes\n";	
 cout<<"3.Megabytes\n";	
 cout<<"4.Gigabytes\n";
 cout<<"5.Terabytes\n"; 
 cout<<"Enter the input format"<<endl;
 cin>>ioforms[1];
 cout<<"Enter the output format"<<endl; 
 cin>>ioforms[2];     
 cout<<"Enter the data amount:"<<endl;
 cin>>ioforms[3];
 cout<<"\n";
if((ioforms[1]==1)&(ioforms[2]==1) ){
d=ioforms[3];
cout<<d;
}
else if((ioforms[1]==1)&(ioforms[2]==2) ){
d=ioforms[3]*0.001;
cout<<d;
}	
else if((ioforms[1]==1)&(ioforms[2]==3) ){
d=ioforms[3]*0.000001;
cout<<d;
}
else if((ioforms[1]==1)&(ioforms[2]==4) ){
d=ioforms[3]*0.000000001;
cout<<d;
}	
else if((ioforms[1]==1)&(ioforms[2]==5) ){
d=ioforms[3]*0.000000000001;
cout<<d;

}	
else if((ioforms[1]==2)&(ioforms[2]==1) ){
d=ioforms[3]*1000;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==2) ){
d=ioforms[3];
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==3) ){
d=ioforms[3]*0.001;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==4) ){
d=ioforms[3]*000001;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==5) ){
d=ioforms[3]*0.000000001;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==1) ){
d=ioforms[3]*0.000001;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==2) ){
d=ioforms[3]*0.001;
cout<<d;
}
else if((ioforms[1]==3)&(ioforms[2]==4) ){
d=ioforms[3];
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==5) ){
d=ioforms[3]*1000;
cout<<d;
}
else if((ioforms[1]==4)&(ioforms[2]==1) ){
d=ioforms[3]*0.000001;
cout<<d;
}	
else if((ioforms[1]==4)&(ioforms[2]==2) ){
d=ioforms[3]*0.001;
cout<<d;
}
else if((ioforms[1]==4)&(ioforms[2]==4) ){
d=ioforms[3];
cout<<d;
}	
else if((ioforms[1]==4)&(ioforms[2]==5) ){
d=ioforms[3]*1000;
cout<<d;
}
else if((ioforms[1]==5)&(ioforms[2]==1) ){
d=ioforms[3]*1000000000000;
cout<<d;
}	
else if((ioforms[1]==5)&(ioforms[2]==2) ){
d=ioforms[3]*1000000000;
cout<<d;
}
else if((ioforms[1]==5)&(ioforms[2]==3) ){
d=ioforms[3]*1000000;
cout<<d;
}	
else if((ioforms[1]==5)&(ioforms[2]==4) ){
d=ioforms[3]*1000;
cout<<d;
}
else{
d=ioforms[3];
cout<<d;
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;      	
}	
break;
case 4:
cout<<"###########Pressure#########"<<endl; 
 cout<<"press:\n";  
 cout<<"1.Atmospheres\n";	
 cout<<"2.Pascals\n";	
 cout<<"3.Bars\n";	 
 cout<<"Enter the input format"<<endl;
 cin>>ioforms[1];
 cout<<"Enter the output format"<<endl; 
 cin>>ioforms[2];     
 cout<<"Enter the pressure:"<<endl;
 cin>>ioforms[3];
 cout<<"\n";
if((ioforms[1]==1)&(ioforms[2]==1) ){
d=ioforms[3];
cout<<d;
}
else if((ioforms[1]==1)&(ioforms[2]==2) ){
d=ioforms[3]*101325;
cout<<d;
}	
else if((ioforms[1]==1)&(ioforms[2]==3) ){
d=ioforms[3]*1.01325;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==1) ){
d=ioforms[3]*0.00001;
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==2) ){
d=ioforms[3];
cout<<d;
}	
else if((ioforms[1]==2)&(ioforms[2]==3) ){
d=ioforms[3]*0.00001;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==1) ){
d=ioforms[3]*0.986923;
cout<<d;
}	
else if((ioforms[1]==3)&(ioforms[2]==2) ){
d=ioforms[3]*100000;
cout<<d;
}
else{
d=ioforms[3];
cout<<d;	
}
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;      	
case 5:
cout<<"###########Angles#########"<<endl; 
 cout<<"press:\n";  
 cout<<"1.Degrees\n";	
 cout<<"2.Radians\n";	
 cout<<"3.Gradian\n";	 
 cout<<"Enter the input format"<<endl;
 cin>>ioforms[1];
 cout<<"Enter the output format"<<endl; 
 cin>>ioforms[2];     
 cout<<"Enter the measure:"<<endl;
 cin>>ioforms[3];
 cout<<"\n";
if((ioforms[1]==1)&(ioforms[2]==1) ){
d=ioforms[3];
cout<<d<<endl;
}
else if((ioforms[1]==1)&(ioforms[2]==2) ){
d=ioforms[3]*0.017460317603;
cout<<d<<endl;
}	
else if((ioforms[1]==1)&(ioforms[2]==3) ){
d=ioforms[3]*10/9;
cout<<d<<endl;
}	
else if((ioforms[1]==2)&(ioforms[2]==1) ){
d=ioforms[3]*57.272727;
cout<<d<<endl;
}	
else if((ioforms[1]==2)&(ioforms[2]==2) ){
d=ioforms[3];
cout<<d<<endl;
}	
else if((ioforms[1]==2)&(ioforms[2]==3) ){
d=ioforms[3]*63.636364;
cout<<d<<endl;
}	
else if((ioforms[1]==3)&(ioforms[2]==1) ){
d=ioforms[3]*0.9;
cout<<d<<endl;
}	
else if((ioforms[1]==3)&(ioforms[2]==2) ){
d=ioforms[3]*0.015714285;
cout<<d<<endl;
}
else{
d=ioforms[3];
cout<<d<<endl;
}
cout<<"Press:\n";
cout<<"1:restart\n";
cout<<"2:exit\n";
cin>>ext;
if(ext<2){
goto restart;	
}
else{
exit(1);
}
break;      	
		

}	
}
}
}
else{
	cout<<"Oohps! incorrect password\n";
	goto password;
}	
return 0;          
} 
