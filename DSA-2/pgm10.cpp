#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="efg";
    string s2="abc";
    cout<<s1.compare(s2)<<endl;//s1 is larger bcoz e has hgh ASCII value than a
    cout<<s2.compare(s1)<<endl;//-1
    cout<<s1.compare(s1);

}