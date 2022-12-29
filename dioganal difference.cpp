#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	int a=0,b=0;
	int x=0;
	for(int i=0;i<n;i++){
		a+=mat[i][i];
		b+=mat[i][n-i-1];
	}
	cout<<abs(a-b)<<endl;
}
