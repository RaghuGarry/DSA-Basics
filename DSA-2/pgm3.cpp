//Generic pointer
//Also know as void pointer
#include<iostream>
using namespace std;
int main(){
    int *x;//x is a pointer to integer
    void *pt;//pt bcomes the pointer to void(Nothing)it can be assigned to any valid data ptr
    int num=20;
    x=&num;//x is assigned to address of num
    pt=x;//void ptr is become an another ptr to num
    
}