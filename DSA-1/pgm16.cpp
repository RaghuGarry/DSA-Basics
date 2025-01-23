#include<bits/stdc++.h>
using namespace std;//Using constructors
class rect{
    private:
    int l,b;
    public:
    void setLength(int x){
        l=x;
    }
    void setBreadth(int y){
        b=y;
    }
    rect(){//Non para meterized const
        setLength(0);
        setBreadth(0);
    }
    rect(int h,int j){//Parametrized comsructer
        setLength(h);
        setBreadth(j);
    }
    rect(rect &z){//Copy constructer
        l=z.l;
        b=z.b;
    }
    int area(){
        return l*b;
    }
};

int main(){
    rect c;
    c.setLength(5);
    c.setBreadth(3);
    cout<<c.area()<<endl;
    rect r(c);
    cout<<r.area();//r is the cop of c
}