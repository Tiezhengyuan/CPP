#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int f( int x, int y)
{
    cout << x << "\t" << y << endl;
    if(x<0 || y<0)
        return x-y;
    else
        return f(x-1, y) + f(x, y-1);
}

int main(){
    
    int x=3, y=5;
    cout << f(x,y) << endl;
    return 0;
}

