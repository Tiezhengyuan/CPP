#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


vector <float> quadratic_fuc(double a, double b, double c){
    vector <float> res = {0,0};
    double discriminant = pow(b, 2)-4*a*c;
    if(discriminant==0){
        res[0]=res[1]=-b/(2*a);
    }else if (discriminant >0){
        cout<< sqrt(discriminant) << endl;
        res[0]= (-b + sqrt(discriminant))/(2*a);
        res[1]= (-b - sqrt(discriminant))/(2*a);
    }else{
        cout<< "no results" <<endl;
    }
    return res;
}

double cal_vertex(double a, double b, double c){
    return -b/(2*a);
}

double max_min_point(double a, double b, double c){
    double vertex = cal_vertex(a,b,c);
    double p = a*pow(vertex, 2) + b*vertex + c;
    return p;
}
int main(){
    double a=6,b=-17,c=12;
    vector <float> res = quadratic_fuc(a,b,c);
    cout<< "root=" << res[0] << " and " << res[1]<<endl;

    cout << "vertex is " << cal_vertex(a,b,c) << endl;
    cout << "Max/min point is " << max_min_point(a,b,c) << endl;
    return 0;
}

