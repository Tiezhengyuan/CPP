#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class B{
    int val;
public: 
    B(int v):val(v){}
    int getVal() const { return val; }
    bool operator<(const B &v) const { return val<v.val; }
};

ostream& operator<< (ostream& out, const B& v){
    out << v.getVal(); return out;
}

template <class T>
struct Out{
    ostream &out;
    Out(ostream &o): out(o){}
    void operator()(const T &val){out << val;}
};


int main(){
    B t1[]={3,2,4,1,5}, t2[]={6,10,8,7,9};
    vector<B> v(10);
    // sort(t1,t1+5); sort(t2,t2+5);
    // merge(t1,t1+5,t2,t2+5, v1.begin());
    // for_each(v.begin(),v.end(), Out<B>(cout));
    return 1;
}
