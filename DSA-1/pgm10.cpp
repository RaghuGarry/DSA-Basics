//Palindrome or not
//Compare the given num with num after reversing it
#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int num;
    int sol=0;
    cout<<"Number: ";
    cin>>num;
    int given=num;
    while(num){
        int a=num%10;
        num=num/10;
        sol=sol*10+a;
    }
    if(sol==given) cout<<"Yes";
    else cout<<"No";
    

}