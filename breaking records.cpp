#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x=0,y=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int z1=a[0],z2=a[0];
	for(int i=0;i<n;i++){
		int m=max(z1,a[i]);
		if(m>z1){
			z1=m;
			x++;}
		int mi=min(z2,a[i]);
		if(mi<z2){
			z2=mi;
			y++;}
	}
	cout<<x<<" "<<y;
}
