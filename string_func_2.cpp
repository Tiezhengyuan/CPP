#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string fun(string t, string s="x", int r=1){
    while(--r)
        s +=s;
    t +=s;
    return s;
}

int main(void){
    string name ="a";
    cout << fun(name);
    cout<<name;

    return 0;
}