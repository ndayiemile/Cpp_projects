#include<iostream>
using namespace std;
int main(){
int num,quotient,rem;
cout<<"Enter decimal number";
cin>>num;
cout<<"Binary is:";
while((num/2)!=1){   
quotient=num/2;  
rem=quotient%2;
cout<<rem;        
}
return 0;     
}