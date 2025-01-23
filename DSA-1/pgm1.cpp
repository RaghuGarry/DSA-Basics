//Sum of first n naural natural numbers

#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}

#include<iostream>
using namespace std;
int main(){
    int sum,n;
    cout<<"Enter n: ";
    cin>>n;
    sum=n*(n+1)/2;
    cout<<sum;
}
