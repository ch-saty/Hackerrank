#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
//    2 2 4 4 5 8
	int c=0,s;cout<<n<<endl;
	while(s!=0){
		int s;
		for(int i=c;i<n;i++)
        s+=a[i];
        int mn=a[c];
	   
    for(int i=c;i<n;i++){
        a[i]-=mn;
		if(a[i]==0)
			c++;
		}
        cout<<n-c<<endl;
    
    }
}
