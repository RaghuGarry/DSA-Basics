#include<bits/stdc++.h>
using namespace std;
int main(){
    string x="bncisnsdadsicsdindzd";
    map<char,int> a;
    for(int i=0;i<x.size();i++){
        a[x[i]]++;
    }
    for(auto it: a){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int maxi=0;
    for(auto i: a){
        if(i.second>maxi) maxi=i.second;
    }
    cout<<maxi;

} 