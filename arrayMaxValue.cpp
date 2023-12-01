#include<iostream>
using namespace std;
int main(){
	float r[5],holder=0;
	int gr=0;
	r[0]=2;
		r[1]=190;
			r[2]=4;
				r[3]=9;
					r[4]=6;
					
	for(int i=0;i<5;i++){
		cout<<r[i]<<"\t";
	}
	
	for(int i=0;i<5;i++){
	
		for(int j=0;j<5;j++){
			if(j==i){continue;}
			holder=r[i]-r[j];
			if(holder<0){
				goto retake;
			}
			else{
				gr=i;
			}
		}
			retake:;
	}
	cout<<"max value is: "<<r[gr];
}
