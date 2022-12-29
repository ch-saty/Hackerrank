#include<bits/stdc++.h>
using namespace std;
int rev(int q){
	int m=0;
	while(q){
		int z=q%10;
		m=m*10+z;
		q/=10;
	}
	return m;
}
int main(){
	int a,b,c,co=0;
	cin>>a>>b>>c;
	for(int i=a;i<=b;i++){
		int x=rev(i);
		
		if(abs(x-i)%c==0)
			co++;
	}
	cout<<co;
	
}

