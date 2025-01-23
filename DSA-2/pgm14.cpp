#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> x={4,9,2,7,6,2,1,3,6,5,8,4};
    reverse(x.begin(),x.end());//Upto the element  it reverse
    for(int i=0;i<12;i++){
        cout<<x[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    vector<int> y={4,9,2,7,6,2,1,3,6,5,8,4};
    sort(y.begin(),y.end());//upto the element it sorts
    for(int i=0;i<12;i++){
        cout<<y[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    vector<int> z{4,9,2,7,6,2,1,3,6,5,8,4};
    reverse(z.begin(),z.begin()+5);//Upto the element  it reverse
    for(int i=0;i<12;i++){
        cout<<z[i]<<endl;
    }
    
}