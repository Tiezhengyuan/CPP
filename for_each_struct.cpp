#include <iostream>
#include <exception>
#include <stdexcept>
#include <iterator>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <stack>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <cctype>
#include <set>
#include <queue>
#include <deque>
using namespace std;

template<class T>struct Out{
    ostream &out;
    Out(ostream &o): out(o){}
    void operator() (const T &x){ out << x; }
};

int main(){
    int t[]={10,5,9,6,2,4,7,8,3,1};
    vector<int> v(t,t+10);
    for_each(v.begin(), v.end(), Out<int>(cout));
    return 1;
}
