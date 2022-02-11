#include <iostream>

using namespace std;


int factorial(int n)
{
    if(n==1)
        return 1;
    else 
        return n*factorial(n-1);
};

int combination(int n, int r)
{
    if(r==0)
        return 0;
    else if(n>=r)
        return factorial(n)/factorial(r)/factorial(n-r);
};



int main(int argc, char *argv[])
{
    cout << combination(10,3) << endl;
    return 1;
}