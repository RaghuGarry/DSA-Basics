//Scope resolution 
#include<iostream>
using namespace std;
int main(){
    int m=100;
    {
        int k=m;
        int m=90;
        cout<<m<<endl;
        cout<<k<<endl;
    }
}