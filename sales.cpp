#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int i=0;
	while(i<n){
		if(a[i]==a[i+1]){
			sum++;
			i+=2;
		}
		else
			i++;
	}
	cout<<sum;
}
