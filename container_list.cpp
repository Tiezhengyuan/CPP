#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class A{
private: int val;
public:
    A():val(0){}
    A(int x):val(x){}
    int getVal() { return val; }
    void setVal(int x) { this->val = x; }
    //sort()
    bool operator< (A &b){
        return (this->val < b.getVal()) ? true : false;
    }
};

ostream& operator<<(ostream& out, A &a){
    out << a.getVal();
}

template<class T> void print(T start, T end){
    while(start != end){
        cout << *start; // overload operator<<()
        start++;
    }
}


int main(void) {
    int a[]={3,2,1};
    list<A> v(a, a+3); // contructor A(int x)
    v.sort(); //overload operator<()
    v.merge(v); 
    print(v.begin(), v.end()); // overload operator<<()

    return 1;
}



