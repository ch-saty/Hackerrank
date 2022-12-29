#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool f=false;
	int m,c=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				m=abs(i-j);
				f=true;
				c=min(m,c);
			}
		}
	}
	if(f)
		cout<<c<<endl;
	else
		cout<<"-1"<<endl;
}
