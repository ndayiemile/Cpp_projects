#include<iostream>
using namespace std;
int main(){
	int i,j,odd=0,even=0;
	cout<<"Enter the number of rows and columns:\n";
	cin>>i>>j;
	int m[i][j];
	for(int r=0;r<i;r++){
		cout<<"row "<<r+1<<" :"<<endl;
		for(int c=0;c<j;c++){
			cin>>m[r][c];
			if(m[r][c]%2==0){
				even+=m[r][c];
			}
			else{
				odd+=m[r][c];
			}
		}
		cout<<endl;
	}
	cout<<"--------collected matrice----------\n";
		for(int r=0;r<i;r++){
		for(int c=0;c<j;c++){
			cout<<m[r][c]<<"\t";
		}
		cout<<endl;
	}
	cout<<"SUM of evens: "<<even<<endl;
	cout<<"SUM of odds: "<<odd;
}
