#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int l=0;
		int a,b;cin>>a>>b;
		for(int i=sqrt(a);i<=sqrt(b);i++){
			int x=ceil(i);
			if((x*x>=a) && (x*x<=b))
			l++;
		}
		cout<<l<<endl;
	}
}
