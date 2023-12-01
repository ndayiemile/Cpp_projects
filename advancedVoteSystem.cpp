#include<iostream>
#include<string>
using namespace std;
int main(){
  int a,b,i,v;
  cout<<"Enter the number of candidates"<<endl;
  cin>>a;
  cout<<"Enter the number of voters"<<endl;
  cin>>b;
  
  cout<<"Enter the names of candidates\n";
  string cnds[a],fcnd[a];
  for(i=0;i<a;i++){
  	cout<<i+1<<":";
  	cin>>cnds[i];
  }

  cout<<endl;
  cout<<"--------------Let's start voting session-------------\n";
  cout<<"Vote by pressing number corresponding to your candidate\n";
  cout<<endl;
  
  float vts[a],s[a],infb[]={0};
  for(i=0;i<a;i++){
  	vts[i]=0;
  }
  for(i=0;i<b;i++){
  	cout<<"VOTE : ";
  	cin>>v;
  	if((v>a)||(v<1)){
  		infb[0]+=1;
	  }
	  else{
	  	v-=1;
	  	vts[v]+=1;
	  }
  }
  
  cout<<endl;
  cout<<"------------------OUTCOMES----------------\n";
	long int y=0,x=0;
	other:
	for(int u=0;u<a;u++){
	x=u;
		for(int j=0;j<a;j++){
			if(vts[u]>=vts[j]){
				continue;
			}
			else{
				goto retake;
			}
		}
			goto outcomes;
			retake:;
	}
	outcomes:
	if(y!=a){
	   	s[y]=vts[x];
	   	fcnd[y]=cnds[x];
	   	vts[x]=-1e+300;
		++y;
	goto other;	
	} else{
		for(int u=0;u<a;u++){
		cout<<fcnd[u]<<": "<<s[u]<<"\n";
	}	
	cout<<"free votes : "<<infb[0];
	}
}
