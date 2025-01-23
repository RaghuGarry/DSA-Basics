//Find the gcd of 2 given numbers
#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int a,b;
    cin>>a>>b;
    while(a!=b){
    if(a>b){
        a=a-b;
    }
    else if(b>a){
        b=b-a;
    }
    }
    if(a==b) cout<< a;

}