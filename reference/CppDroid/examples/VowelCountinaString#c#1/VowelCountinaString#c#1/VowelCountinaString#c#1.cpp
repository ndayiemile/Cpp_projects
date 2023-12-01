#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,y;
  int x1,x2;
  cout<<"Enter a:";//input message
  cin>>a;//use cin to get/read input from user
  cout<<"Enter b:";
  cin>>b;
  cout<<"Enter c:";
  cin>>c;
   cout<<"Enter the value of y:";
    cin>>y;
   // perform arithmetic operations
    d=c-y;
    x1=(-b+√(b*b-4*a*d))/2*a;
    x2=(-b-√(b*b-4*a*d))/2*a;
   // display the results on the screen
  cout<<"first root is:"<<x1<<endl;
  cout<<"second root is:"<<x2<<endl;
  return 0;
  
}
  
 

