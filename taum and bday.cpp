#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		long long int w,b,wc,bc,z;
		cin>>b>>w>>bc>>wc>>z;
		long long int int x,y,v;
		x=w*wc+b*bc;
		y=(w+b)*wc+b*z;
		v=(w+b)*bc+w*z;
		cout<<min(min(x,v),min(x,y))<<endl;
	}
}
