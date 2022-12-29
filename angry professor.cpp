#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int x,y,c=0;
		cin>>x>>y;
		int a[x];
		for(int i=0;i<x;i++){
			cin>>a[i];
		}
		for(int i=0;i<x;i++){
			if(a[i]<=0)
				c++;
		}
		if(c>=y)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
