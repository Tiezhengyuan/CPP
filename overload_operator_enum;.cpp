#include <iostream>

using namespace std;


enum T {A=2, B=-1,C};

class Int{
public: T v;
    Int(T a){ v = a; }
    // solve problem in the future
    Int operator+(int i){v = T(v+i); cout<<v;return *this;}
    Int& operator++(){ v + 2; return *this;}
};

ostream& operator<<(ostream &o, Int &a){ 
    ++a;   return o << a.v;
}
int main(void) {
    Int i = B;    cout << i;
    return 0;
}