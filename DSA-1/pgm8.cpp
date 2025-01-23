//Find given number is armstrong or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    int x=n;
    int temp=n;
    int sol=0;
    int digits=0;
    while(x){
        digits++;
        x=x/10;
    }
    while(temp){
        a=temp%10;
        temp=temp/10;
        sol=sol+pow(a,digits);
    }
    if(sol==n) cout<<"Yes";
    else cout<<"No";
    
}