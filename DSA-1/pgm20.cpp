//Inheritance
//getting the propertoes of one class to other
#include<bits/stdc++.h>
using namespace std;
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
    int getlength(){
        return l;
    }
    int getbreadth(){
        return b;
    }
    rect(){//Non para meterized const
        l=0;
        b=0;
    }
    rect(int h,int j){
        setLength(h);
        setBreadth(j);
    }
    rect(rect &z){
        l=z.l;
        b=z.b;
    }
    int area(){
        return l*b;
    }
    int peri();//Prototype of the funct
};

class cuboid: public rect{
    private:
    int h;
    public:
    cuboid(int x,int y,int z){
        setLength(x);
        setBreadth(y);
        h=z;
    }
    int volume(){
        return getlength()*getbreadth()*h;
    }
};



int main(){
    cuboid c(5,4,2);
    cout<<c.volume();

}