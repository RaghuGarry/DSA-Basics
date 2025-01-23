//Find the given num is perfect or not
//Perfect=Sum of th factors of the umbers is equal to 2*num
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            sum=sum+i;
        }
        
    }
    if(sum==2*num) cout<<"Yes it is perfect";
    else cout<<"No It is ot perfect";
}