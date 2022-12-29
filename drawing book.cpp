#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int s=0,e=0;
    if(n%2!=0){
        if(k==n-1){
        cout<<"0";
        return 0;
        }
        s=floor(k/2);
        while(n<=k){
            n-=2;
            e++;
        }
    cout<<min(s,e)<<endl;
	}
    else{
    	if(k==n-1){
        cout<<"1";
        return 0;
        }
        s=floor(k/2);
        while(n<=k){
            n-=2;
            e++;
        }
    cout<<min(s,e)<<endl;
	}
	
    
    
}
