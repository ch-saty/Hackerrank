#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> x(5);
	x[0]=0;
	x[1]=0;
	x[2]=0;
	x[3]=0;
	x[4]=0;
	x[x[0]]=1;
	cout<<x[x[0]];
}
