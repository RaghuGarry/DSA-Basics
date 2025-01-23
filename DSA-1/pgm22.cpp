#include<bits/stdc++.h>
using namespace std;
//constructers in inheritance
class base{
    public:
    base(){
        cout<<"Default constructor of base"<<endl;
    }
    base(int x){
        cout<<"Parameterized condtrucer of base "<<x<<endl;
    }
};
class derived: public base{
    public:
    derived(){
        cout<<"default of derived"<<endl;
    }
    derived(int y){
        cout<<"parametrer of derived "<<y<<endl;
    }
    derived(int x,int a):base(a){//u r sending a to base class
        cout<<"parameter of derived class "<<x;
    }
};

int main(){
    derived(5,4);
}