#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,d,sum=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i==k)
			continue;
		else
		sum+=a[i];
	}
	sum/=2;
	cin>>d;
	if(d>sum)	
		cout<<d-sum;
	else if(sum==d)
		cout<<"Bon Appetit";
	return 0;
}
