#include<bits/stdc++.h>
using namespace std;//Print the bianry in reverse
int main(){
    int n;
    cin>>n;
    while(n){
        int r=n%2;
        cout<<r;
        n=n/2;
    }
}