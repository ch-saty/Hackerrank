#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int x=0,c=0,mn=0;
	for(int i=0;i<n-1;i++){
		mn=min(mn,x);
		if(s[i]=='U')
			x++;
		else if(s[i]=='D')
			x--;
		if(x==0)
			c++;
	}
	cout<<c;
}
