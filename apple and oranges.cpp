#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,t,a,b,m,n,c1=0,c2=0;
//	s,t=start end of house
//	a=apple b=orange
//	d=distance from tree
//	
	cin>>s>>t>>a>>b>>m>>n;
	int ap[m],orr[n];
	for(int i=0;i<m;i++)
		cin>>ap[i];
	
	for(int i=0;i<n;i++)
		cin>>orr[i];
	
	for(int i=0;i<m;i++){
		int sum=0;
		sum=a+ap[i];
		if(sum<=t && sum>=s)
			c1++;
	}
	
	for(int i=0;i<n;i++){
		int sum=0;
		sum=b+orr[i];
		if(sum<=t && sum>=s)
			c2++;
	}
	cout<<c1<<"\n"<<c2<<endl;
	
}
