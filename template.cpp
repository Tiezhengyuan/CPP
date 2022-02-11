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
#include <functional>
using namespace std;

struct Complement{
    char operator()(char &c){
        switch(c){
            case 'A': return 'T'; break;
            case 'T': return 'A'; break;
            case 'G': return 'C'; break;
            case 'C': return 'G'; break;
            default: return 'N';
        };
    }
};

int main(void) {
    string s = "ATGC"; string ss;
    transform(s.rbegin(), s.rend(), \
        back_inserter(ss), Complement());
    cout << ss;
    return 1;
}



