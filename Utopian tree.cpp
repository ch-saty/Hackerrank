#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int l=1;
		int a;cin>>a;
		if(a==0){
			cout<<"1"<<endl;
			continue;
		}
		else{
			int d=1;
			while(d<=a){
				if(d%2!=0){
					l=l*2;
				}
				else
					++l;
				d++;
			}
				
		}
		cout<<l<<endl;
	}
}
