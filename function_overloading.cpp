#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <typeinfo>

using namespace std;

int func(int a){
    cout<<"type is "<< typeid(a).name()<<endl;
    return ++a;
}

double func(double a){
    cout<<"type is "<< typeid(a).name()<<endl;
    return ++a;
}

/*
int func(int &a){
    cout<<"reference a"<<endl;
    return a++;
}*/

int func(int *a){
    cout<<"pointer a"<<endl;
    return ++(*a);
}

int main(void){
    int a=1;
    func(a);
    
    double b= (double) a;
    func(b);
    
    // int i=1;
    // func(&i);//pointer
    return 0;
}