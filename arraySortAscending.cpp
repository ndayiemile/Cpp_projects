#include<iostream>
using namespace std;
int main(){
	float r[5],s[5];
	long int y=0,x=0,z=-1;
	r[0]=10000;
		r[1]=123.5;
			r[2]=-4;
				r[3]=7;
					r[4]=0;
	cout<<endl;
	cout<<endl;
	cout<<"values in the array are: \t";
	for(int i=0;i<5;i++){
		cout<<r[i]<<"\t";
	}
	cout<<endl;
	cout<<endl;
	cout<<"----------------------------------------------------------------\n";
	cout<<endl;
	cout<<endl;
	cout<<"Sorted array in ascending order: \t";
	other:
	for(int i=0;i<5;i++){
	x=i;
		for(int j=0;j<5;j++){
			if(r[i]<=r[j]){
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
	if(y!=5){
	   	s[y]=r[x];
	   	r[x]=1e+300;
		++y;
	goto other;	
	} else{
		for(int i=0;i<5;i++){
		cout<<s[i]<<"\t";
	}	
	}
	cout<<endl;
	cout<<endl;

	
}
