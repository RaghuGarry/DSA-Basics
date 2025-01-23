#include<bits/stdc++.h>
using namespace std;//creting the objects with heaps
class sq{
    private:
    int length;
    public:
    void setside(int a){
        length=a;
    }
    int area(){
        return length*length;
    }
    int getLength(){
        return length;
    }
};
int main(){
    sq *i=new sq;
    i->setside(3);
    cout<<i->area();
}
