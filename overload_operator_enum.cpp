#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

enum T {A=2, B=-1,C};
T operator+(T t, int i){
    T C = T(2);
    switch(t){
        case A: return T(A);
        case B: return static_cast<T>(i);
        default: return (T)1;
    }
}

int main(void) {
    T i = A+2;
    cout << i << C;
    return 0;
}


