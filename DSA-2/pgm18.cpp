//print the word in th e digit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int new_num=0;
    while(n){
        int r=n%10;
        n=n/10;
        new_num=new_num*10+r;
    }
    map<int,string>m;
    m.insert({1,"One"});
    m.insert({2,"Two"});
    m.insert({3,"Three"});
    m.insert({4,"Four"});
    m.insert({5,"Five"});
    m.insert({6,"Six"});
    m.insert({7,"Seven"});
    m.insert({8,"eight"});
    m.insert({9,"nine"});
    while(new_num){
        int x=new_num%10;
        cout<<m[x]<<" ";
        new_num=new_num/10;
    }

}



