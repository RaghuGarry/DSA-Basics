//pointer variable and new
#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=23;
    int a=*p+10;
    cout<<a;
}

