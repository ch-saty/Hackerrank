#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int x=a[n-1];
	int y=b[m-1];
	int c=0;
	for(int i=x;i<y;i++){
		for(int j=0;j<n;j++){
			if(a[j]%i==0 && b[j]%i==0)
				c++;
		}
	}
	cout<<c;
	
}
