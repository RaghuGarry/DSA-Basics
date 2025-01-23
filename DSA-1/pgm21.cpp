#include<bits/stdc++.h>
using namespace std;
//constructers in inheritance
class base{
    public:
    base(){
        cout<<"Default of base"<<endl;
    }
    base(int x){
        cout<<"Parameterized of base "<<x<<endl;
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
};

int main(){
    derived d;
    cout<<endl;//Note tat without give=ing anything
    //first default costructor of parent class is executed
    //and the default construceter of child i esecuted
    derived a(15);//same here

}