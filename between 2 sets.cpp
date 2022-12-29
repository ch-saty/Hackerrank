#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int  lcm(int arr[], int n)
{
    int ans = arr[0];
 
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

int main(){
	int n,m;cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int z=lcm(a,n);
	int x=b[0];
	for(int i=1;i<m;i++){
		x=gcd(x,b[i]);
	}
	int c=0;
	for(int i=z;i<=x;i+=z){
		if(x%i==0)
		c++;
	}
	cout<<c;
}
