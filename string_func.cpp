#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string fun(string &t, string s="", int r=2){
    while(--r)
        s +=s;
    t +=s;
    return s;
}

int main(void){
    string name ="x";
    cout << fun(name, name);
    cout<<name;

    return 0;
}