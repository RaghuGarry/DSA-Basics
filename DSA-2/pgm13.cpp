#include<bits/stdc++.h>
using namespace std;
int main(){
    int x[]={4,9,2,7,6,2,1,3,6,5,8,4};
    reverse(x,x+6);//Upto the element  it reverse
    for(int i=0;i<12;i++){
        cout<<x[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    int y[]={4,9,2,7,6,2,1,3,6,5,8,4};
    sort(y,y+6);//upto the element it sorts
    for(int i=0;i<12;i++){
        cout<<y[i]<<endl;
    }
}