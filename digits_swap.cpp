#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

void swap(float *x, float *y){
    float *z = x;
    x = y;
    y = z;
}

int main(void){
    vector <float> t;
    t = {3.,2.,1.};
    float *p = &t[0];
    swap(p,p+2);
    cout << t[0] << t[1] << t[2];
    return 0;
}