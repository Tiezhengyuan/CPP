#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

class A{
private: int val;
public:
    A():val(0){}
    A(int x):val(x){}
    int getVal(){ return val; }
    void setVal(int x){ val=x; }

    // int operator[](const A *b){return b.val;}
    bool operator< (const A &b) const{
        return (this->val < b.val);
    }
    // 
    bool operator==(const A &b){
        return (this->val==b.val);
    }
};

template<class T> void operator<<(ostream &out, T &a){
    out << a.getVal();
}

template<class T> void print(T start, T end){
    while(start != end){
        cout << *start;
        start++;
    }
}



int main(void) {
    int a[]={3,1,2}; 
    //create: constructor A(int x)
    list<A> v(a, a+3);

    return 1;
}




