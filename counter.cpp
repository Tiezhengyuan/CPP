//define counter class

#include "counter.h"
#include <iostream>
#include <climits>


using namespace std;

// constructor
counter::counter()
{
    count=0;
    max_value = INT_MAX;
}

counter::counter(int m)
{
    count=0;
    max_value = m;
    cout << count << endl;
}

// 
void counter::increment()
{
    count++;
}

void counter::decrement()
{
    (count>0) ? (count--) : (count=0);
}

// 
void counter::setCount(int value)
{
    count = value;
}

int counter::getCount()
{
    return count;
}

