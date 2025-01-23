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
int rect :: peri(){
    return 2*(l+b);
}

int main(){
    rect p(10,5);
    cout<<p.area()<<endl;
    cout<<p.peri();

}