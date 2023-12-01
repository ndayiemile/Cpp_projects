#include<iostream>
using namespace std;
int main(){
float i;
char l[20];
cout<<"Students informations:\n";   
for(int j=1;j<=12;j++){
cout<<"Roll number"<<j<<endl;
cout<<"Enter the name:";
cin>>l;    
cout<<"Enter the marks:"; 
cin>>i;
cout<<"\n";
}
cout<<"Display the results:";
return 0;
}