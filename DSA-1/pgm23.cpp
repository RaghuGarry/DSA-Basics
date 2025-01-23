// isA vs hasA
#include<bits/stdc++.h>
using namespace std;



class rect{
    //.....
};
class cuboid: public rect{// cuboid isA rectangle
    //.....
};
class table{//Table hasA rect
    rect top;
};


int main(){
    return 0;
}