#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[5];
    long long int minsum=0,maxsum=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    for(int i=0;i<4;i++){
        minsum+=a[i];
        maxsum+=a[i+1];
    }
    cout<<minsum<<" "<<maxsum;
    
}
