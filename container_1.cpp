#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class B{
    int val;
public: 
    B(){val=0;}
    B(int v):val(v){}
    int getVal() const { return val; }
    int setVal(int a) { return this->val=a; }
    bool operator==(const B &b) const {
        return (this->val == b.getVal()) ? true : false;
    };
};




int main(){

int a[]={1,2,3};
vector<B> v(a, a+3);
vector<B>::iterator iter;
iter = find(v.begin(), v.end(), B(2));
cout << iter->getVal();

    return 1;
}