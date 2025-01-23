#include<bits/stdc++.h>
using namespace std;
//Convert all the char in the string to all small and all big
int main(){
    string given="abdnYkbDhabXSD";
    for(int i=0;i<given.size();i++){
        if(given[i]>='a'&& given[i]<='z'){
            given[i]=given[i]-32;
        }
    }cout<<given<<endl;


//SMALL_LETTER - CAPITAL_LETTER = 32

    string other="aiuaVVINKJjhbn";
    for(int i=0;i<other.size();i++){
        if(other[i]>='A' && other[i]<='Z'){
            other[i]+=32;
        }
    }cout<<other;
}
