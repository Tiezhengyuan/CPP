#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


void f1(vector <int> v)
{
    if(!v.empty())
    {
        cout << v[0] << ",";
        v.erase(v.begin(), v.begin()+1);
        f1(v);
    }
    
}


int main(){

    vector<int> v {1,2,3,4,5,6};
    // = for loop
    f1(v);


    return 0;
}

