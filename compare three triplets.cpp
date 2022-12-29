#include<bits/stdc++.h>>
using namespace std;
int main(){
	int a1[3],b1[3],a=0,b=0;
	for(int i=0;i<3;i++){
		cin>>a1[i];
	}
	for(int i=0;i<3;i++){
		cin>>b1[i];
	}
	for(int i=0;i<3;i++){
		if(a1[i]>b1[i])
			a++;
		else if(b1[i]>a1[i])
			b++;
	}
	cout<<a<<" "<<b;
}
