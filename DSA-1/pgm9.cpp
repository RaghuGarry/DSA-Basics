//Reverse a number
#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int num;
    int sol=0;
    cout<<"Number: ";
    cin>>num;
    while(num){
        int a=num%10;
        num=num/10;
        sol=sol*10+a;
    }
    cout<<sol;

}