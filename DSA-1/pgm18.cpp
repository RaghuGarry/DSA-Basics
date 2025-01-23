#include<bits/stdc++.h>
using namespace std;
//Inheritance
//Syntax--> class derived-class-name : visibility-mode base-class-name

class base{
    public:
    int x=50;
    void show(){
        cout<<x<<" "<<endl;
    }

};

class derived: public base{//public is the visibility mode and it is deriving class base
    public:
    int y=10;
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    base a;
    derived b;
    a.show();
    b.show();//we can also use the function in base class
    b.display();//along with their public values
    
}
