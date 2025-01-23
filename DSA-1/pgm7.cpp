//Display the digits of a number--> from right to left
//If you want the last digit take %10 then you will get the remainder as the lst digit
//if you want to decrease the size by one digit that is remove the right most digit then take /10
//We have to repeat unless the given num is equal to 0
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,r ;
    cin>>n;
    while(n){//that means n!=0
        r=n%10;//gives the remainder as the last digit
        n=n/10;//decreases the lenght of the num by 1
        cout<<r<<endl;
    }

}