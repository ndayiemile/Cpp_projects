#include<iostream>
using namespace std;
int main(){
 int Num1,Num2,Num3;
 int sum,avr;
  cout<<"Inter first integer:";
  cin>>Num1;
  cout<<"Inter second integer:";
  cin>>Num2;
  cout<<"Inter third integer:";
   cin>>Num3;
 //perform arithimetic operations
  sum=Num1+Num2+Num3;
   avr =sum/3;
  //display results on screen
  cout<<"The sum is:"<<sum<<endl;
  cout<<"The average is:"<<avr<<endl;
    return 0;
}
