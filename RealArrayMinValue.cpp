#include<iostream>
using namespace std;
int main(){
	float r[5];
	int x=0;
	r[0]=0;
		r[1]=-10;
			r[2]=-4;
				r[3]=-900;
					r[4]=-90000;
					
	for(int i=0;i<5;i++){
		cout<<r[i]<<"\t";
	}
	cout<<endl;
	cout<<"----------------------------------------------------------------\n";
	cout<<endl;
	other:
	for(int i=0;i<5;i++){
	x=i;
		for(int j=0;j<5;j++){
			if(r[i]>=r[j]){
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
		cout<<r[x]<<"\t";
}
