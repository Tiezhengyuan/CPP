#include <iostream>
using namespace std;

template <typename T>
int compare(const T& a, const T& b){
    if(a<b) return -1;
    if(a>b) return 1;
    return 0;
}


int main(){

    int a=3, b=6;
    cout << compare(a,b);

    float c=3.3;
    cout << compare(float(b),c);

    string s1="abc", s2="bcd";
    cout << compare(s1,s2);

    return 1;
}
