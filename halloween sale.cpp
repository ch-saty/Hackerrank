#include<bits/stdc++.h>
using namespace std;
int main(){
	int p,d,m,s;
	cin>>p>>d>>m>>s;
	int c=0,a=0;
	while(c<=s){
		if(p<=m){
			p=m;
			d=0;}
		c+=p;
		p-=d;
		if((c<=s))
		a++;
	}
	cout<<a<<endl;
}
