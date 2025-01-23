//Check if the given num is prime or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"Not a prime";
            return 0;
        }

    }cout<<"A prime";
    
}