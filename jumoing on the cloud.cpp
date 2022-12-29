#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;int a[n],l=0,j=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0;
	while(i<=n-2){
		if(a[i+2]==0){
			l++;i+=2;continue;}
		
		else{
			l++;i++;continue;}
		}
	cout<<l<<endl;
}
