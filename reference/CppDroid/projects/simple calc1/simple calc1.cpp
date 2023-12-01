#include<iostream>
using namespace std;
int main(){
 int x;
 int y;
 int sum,diff,product,quotient;
cout<<"1:Additive functions";
cout<<"2:Multiplicative functions";
cin>>x;
switch(x){
case 1:
  cout<<"Enter first integer:";
  cin>>x;
  cout<<"Enter second integer:";
  cin>>y;
sum=x+y;
diff =x-y;
cout<<"Sum is"<<sum<<endl;
cout<<"Difference is"<<diff<<endl;
cout<<"Enter first integer:";
case 2:
  cin>>x;
  cout<<"Enter second integer:";
  cin>>y;    
product=x*y;
quotient=x/y;   
cout<<"Product is"<<product<<endl;
cout<<"Quotient is:"<<quotient<<endl;
}
    return 0;
}