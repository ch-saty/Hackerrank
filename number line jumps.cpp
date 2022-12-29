#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	for(int i=0;i<=10000;i++){
		int a,b;
		a=x1+(i-1)*v1,b=x2+(i-1)*v2;
		if(a==b){
			cout<<"YES";
			return 0;}
		}
	
	cout<<"NO";
	
	return 0;
}
