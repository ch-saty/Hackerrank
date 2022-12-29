#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n],mx=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}	
	n=mx-k;
	if(n<=0)
		cout<<"0";
	else
		cout<<n<<endl;
}
