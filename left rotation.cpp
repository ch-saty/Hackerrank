#include <bits/stdc++.h>

using namespace std;

   
int main(){
    int n,d;cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int x=min(d,abs(n-d));
    if(x==d){
		while(d--){
	         int x=ar[0];
	        for(int i=0;i<n-1;i++){
	            ar[i]=ar[i+1];
	        }
	    ar[n-1]=x;
		}
	}
	else{
		while(x--){
	         int z=ar[n-1];
	        for(int i=n-1;i>=0;i--){
	            ar[i]=ar[i-1];
	        }
	    ar[0]=z;
		}
	}
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
}
