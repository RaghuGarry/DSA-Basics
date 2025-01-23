#include<bits/stdc++.h>
using namespace std;
/// @briefthe terminating charecter in string is /0
int main(){
    string a="Raghu";
    cout<<a<<endl;
    string b(5,'a');
    cout<<b<<endl;
    /*string c;
    cin>>c;//if we enter input with spaces it will take only the first wrd
    cout<<c;*/
    string full;
    getline(cin,full);//to take the input with spaces
    cout<<full;
}