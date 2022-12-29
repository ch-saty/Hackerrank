#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	float a=0,b=0,c=0;
	for(int i=0;i<n;i++){
		if(ar[i]>0)
			a++;
		else if(ar[i]<0)
			b++;
		else
			c++;
	}
	printf(" %.6f \n %.6f \n %.6f",a/n,b/n,c/n);
}
