#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
    int n,c=0;cin>>n;
    int x=n;
    while(x!=0){
    	int p=x%10;
    	x/=10;
    	if(p==0)
			continue;
    	if(n%p==0)
    		c++;
    	
	}
	cout<<c<<endl;
	}
}
