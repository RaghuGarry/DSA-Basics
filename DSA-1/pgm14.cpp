#include<bits/stdc++.h>
using namespace std;
class rect{
    private://It is private we cant directly access the data
    int l;
    int b;
    public:
    void setlength(int a){
        l=a;
    }
    void setbreadth(int d){
        b=d;
    }
    int displaylength(){
        return l;
    }
    int displaybreadth(){
        return b;
    }
    int area(){
        return displaylength()*displaybreadth();
    }
};

int main(){
    rect z;
    z.setlength(5);
    z.setbreadth(6);
    cout<<z.area()<<endl;
    cout<<z.displaybreadth();
}