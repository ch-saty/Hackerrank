#include <bits/stdc++.h>
#include<string>
using namespace std;
int dtb(int n){
        int x=1;
        int ans=0;
        while(x<=n)
            x*=2;
        x/=2;
        while(x>0){
            int lastDigit =n/x;
            n-=lastDigit*x;
            x/=2;
            ans=ans*10+lastDigit;
        }
        return ans;
        }
int main(){
    int a;cin>>a;
    int y=(dtb(a));
    string s =to_string(y);
    int c=1,mx=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1] && s[i]=='1'){
             c++;
             mx=max(mx,c);}
        else 
            c=0;
        }
        cout<<mx<<endl;
    }

