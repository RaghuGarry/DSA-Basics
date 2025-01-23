//Factorial of a num
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}