#include<iostream>
using namespace std;
int main(){
int a,b;
char c;
cout<<"Enter number of rows:";
cin>>a;
cout<<"Enter number of columns:";
cin>>b;
cout<<"Enter a letter or number:";
cin>>c;
for(int i=0;i<a;i++){
for(int j=0;j<b;j++){
cout<<c<<"\t";
        }
cout<<"\n";
    }
return 0;
    }