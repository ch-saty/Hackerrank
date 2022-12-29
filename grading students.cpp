#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int gra[n];
	for(int i=0;i<n;i++){
		cin>>gra[i];
	}
	for(int i=0;i<n;i++){
		int x=floor((gra[i]/5));
		if(gra[i]>=38){
			if((x+1)*5-gra[i]<3)
				cout<<(x+1)*5<<"\n";
			else
				cout<<gra[i]<<"\n";
			}
		else
			cout<<gra[i]<<"\n";				
	}
	return 0;
}
