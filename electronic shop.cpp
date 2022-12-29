#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,k,d,mx=0;
	cin>>b>>k>>d;
	int ke[k],dr[d]; 
	int x=0,c=0,mn=0;
	for(int i=0;i<k;i++){
		cin>>ke[i];}
	
	for(int i=0;i<d;i++){
		cin>>dr[i];}
	
	for(int i=0;i<k;i++){
		for(int j=0;j<d;j++){
			int sum=ke[i]+dr[j];
			if(sum<=b)
			mx=max(mx,sum);
				}
			}
	if(mx)			
	cout<<mx;
	else
		cout<<"-1";
}
