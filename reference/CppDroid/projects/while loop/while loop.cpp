#include<iostream>
using namespace std;
int main(){
int n,b;
n=0;
while(5>n){
cout<<"Enter your balance:";
cin>>b;
if(b>100000){
cout<<"Your bonus is:"<<b*0.05<<endl;}
else if((50000<=b)&(100000>b)){
cout<<"Your bonus is:"<<b*0.03<<endl;}
else
cout<<"No bonus"<<endl;
n++;
}       
return 0;
}