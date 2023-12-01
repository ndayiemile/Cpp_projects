#include<iostream>
using namespace std;
double square(double &c){
    
    return c*c;
}
int main(){
double x;   
cout<<"Enter the number:";
cin>>x;    
cout<<"your input squared is "<<square(x)<<endl;
return 0;
}
