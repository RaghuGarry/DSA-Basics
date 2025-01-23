#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="fghj";
    cout<<a.empty()<<endl;//False
    string b="";
    cout<<b.empty()<<endl;//True
    string s="hellohii";
    cout<<s.erase(3/*starting index*/,2/*numbr of char*/);
}