//for-each loop
#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int a[]={2,3,4,5,6,7};
    for(int i:a){//for each value stored in array a
        cout<<i<<endl;
    }
    for(int y: a){
        cout<<++y<<endl;//inc each value not in the array just inc and prints
    }
}