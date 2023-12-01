#include<iostream>
using namespace std;
int main(){
	int a,b,i,v;
  cout<<"Enter the number of candidates"<<endl;
  cin>>a;
  cout<<"Enter the number of voters"<<endl;
  cin>>b;
  
  cout<<"Enter the names of candidates\n";
  char cnds[a][100];
  for(i=0;i<a;i++){
  	cout<<i+1<<":";
  	cin>>cnds[i];
  }
  cout<<endl;
  cout<<"--------------Let's start voting session-------------\n";
  cout<<"Vote by pressing number corresponding to your candidate\n";
  cout<<endl;
  
  int vts[a];
  int error[1];
  error[1]=0;
  for(i=0;i<a;i++){
  	vts[i]=0;
  }
  for(i=0;i<b;i++){
  	cin>>v;
  	v-=1;
  	if((v>(a-1))||(v<0)){
  		error[1]+=1;
	  }
	else{
	 	vts[v]+=1;	
	}
  }
  
  cout<<endl;
  cout<<"------------------OUTCOMES----------------\n";
  for(i=0;i<a;i++){
  	cout<<cnds[i]<<" : "<<vts[i]<<endl;
  }
  cout<<"free votes: "<<error[1];	
}

