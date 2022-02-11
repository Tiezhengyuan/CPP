#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// pass value
// copy value, different address
char f1(char c){
    return c++;
}

// pass reference
// same value, same address
char f2(char &c){
    c--;
    return c++;
}

// pass pointer itself has its own address
// point a memory address, which may be allocated to a variable
char f3(char *c){
    (*c)--;
    // return *c firstly
    // then move pointer c rather than x;
    return *c++;
}

char f4(char *c){
    // return *c firstly, then add value
    return (*c)++;
}
int main(void){
    // reference
    char x='x';
    cout<<f1(x);
    cout<<f2(x);
    cout<<x<<endl;

    // pointer
    x='x';
    cout<<f3(&x);
    cout<<f4(&x);
    cout<<x<<endl;
    return 0;
}