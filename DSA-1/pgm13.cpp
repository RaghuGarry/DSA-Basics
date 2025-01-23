//Definig a class
#include<bits/stdc++.h>
using namespace std;
class rect{
    public://we have to wrte public because by default c++ class members are private
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int peri(){
        return 2*(length+breadth);
    }
};

int main(){
    rect a,b;
    a.length=10;
    a.breadth=5;
    cout<<a.peri()<<endl;
    b.length=20;
    b.breadth=15;
    cout<<b.area();
    
}