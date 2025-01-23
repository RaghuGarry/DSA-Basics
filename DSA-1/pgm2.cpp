//Cal distance between 2 points
//(x1,y1),(x2,y2)
#include<iostream>
#include<cmath>
using namespace std;
int main (){
    float x1,y1,x2,y2,distance;
    cout<<"Point 1 Coordinates=";
    cin>>x1>>y1;
    cout<<"Point 2 coordinates=";
    cin>>x2>>y2;
    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<distance<<endl;

}