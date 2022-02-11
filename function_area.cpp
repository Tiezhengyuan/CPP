#include <iostream>
#include <cmath>
//math.h is deprecated c file in C.
using namespace std;

double rectangle(double x, double y){
    return x*y;
}

double square (double x){
    return pow(x,2);
}

double triangle(double length, double height){
    return length*height/2;
}

double circle(double r, int round_decimal){
    int s = pow(10, round_decimal);
    double area = round(M_PI*pow(r,2)*s)/s;
    return area;
}


int main(){
   
    double x=12.3, y=45, r=3.6;
    cout<< "rectangle area: " << rectangle(x,y) << endl;
    cout<< "square area: " << square(x) << endl;
    cout<< "triangle area: " << triangle(x,y) << endl;
    cout<< "circle area: " << circle(r, 3) << endl;
    return 0;
}

