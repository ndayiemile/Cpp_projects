#include<iostream>
using namespace std;
int main(){
int missed;
for(int c=1;c<=10;++c){
if(c==5){
 missed=c;
continue;   
}
cout<<c<<",";
}
cout<<"The loop skips:"<<missed<<endl;
return 0;
}