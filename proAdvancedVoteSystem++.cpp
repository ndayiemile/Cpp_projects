//Electronic locally hosted voting system
#include<iostream>
#include<string>
using namespace std;
int main(){
	//variables initialisation
  int a,b,i,v;
  //election initialisation with reading number of -candidates and -voters
  cout<<"Enter the number of candidates"<<endl;
  cin>>a;
  cout<<"Enter the number of voters"<<endl;
  cin>>b;
  cout<<"Enter the names of candidates\n";
 
  string cnds[a],fcnd[a]; //declaration for string arrays for getting candidates (cnds[a])  and the one to hold sorted values in ascending order after voting(fcnd[a])
  for(i=0;i<a;i++){
  	cout<<i+1<<":";
  	cin>>cnds[i];
  }
  
  //creation of the voting IDs
  cout<<"Create the voters ids:\n";
  string vIds[b],vId;//array for storing voting IDs (vIds[b]) and variable vId to hold input ID
  for(i=0;i<b;i++){
  	cout<<i+1<<":";
  	cin>>vIds[i];
  }
  
  //voting session start and control
	cout<<endl;
  cout<<"--------------Let's start voting session-------------\n";
  cout<<"Vote by pressing number corresponding to your candidate\n";
  cout<<endl;
  
  //declaration of votes holder array(vts[a]) ,sorted votes after voting in ascending order after election (s[a]) ,and array to hold free votes with initialisation (infb[]={0})		
  float vts[a],s[a],infb[]={0};
  
  //initialisation to votes array to 0 for each placeholder
  for(i=0;i<a;i++){
  	vts[i]=0;
  }
  	//loop for voting
  for(i=0;i<b;i++){
  		//get in codes
  	re_enter_code:
  	cout<<"CODE: ";
  	cin>>vId;
  	 for(i=0;i<b;i++){
  	 	if(vId == vIds[i]){
  	 		goto voting;
		   }
  		}
  		 goto re_enter_code;
  		//get in votes
  	voting:
  	cout<<"VOTE: ";
  	cin>>v;
  	cout<<endl;
  	if((v>a)||(v<1)){
  		infb[0]+=1;
	  }
	  else{
	  	v-=1;
	  	vts[v]+=1;
	  }
  }
  
  //outcomes
  cout<<endl;
  cout<<"------------------OUTCOMES----------------\n";
	long int y=0,x=0;
	other:
  //loop for arranging the candidates with respect to their voices(start)
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
	  //loop for arranging the candidates with respect to their voices(end)

	} else{
	//display for the candidates after their voices
		for(int u=0;u<a;u++){
		cout<<fcnd[u]<<": "<<s[u]<<"\n";
	}	
	cout<<"free votes : "<<infb[0];
	}
}
