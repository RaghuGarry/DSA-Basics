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
    int getLength(){
        return l;
    }
    int getBreadth(){
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
    int peri(){
        return 2*(l+b);

    }
};

class cuboid:public rect{
    private:
    int h;
    public:
    void setHeight(int z){
        h=z;
    }
    int getHeight(){
        return h;
    }
    cuboid(int p=0,int q=0,int r=0){
        setLength(p);//becouse there are private in thrie class
        setBreadth(q);
        setHeight(r);
    }
    int volume(){
        return getLength()*getBreadth()*getHeight();
    }
};
int main(){
    cuboid c(5,3,4);
    cout<<c.volume();

}