// #include "counter.h"
#include <iostream>
#include <climits>

using namespace std;

class counter
{
    private:
        int count;
        int max_value;

    public:
    // constructor
    counter(void)
    {
        count=0;
        max_value = INT_MAX;
    }
    counter(int m)
    {
        count=0;
        max_value = m;
        cout << max_value << endl;
    }

    // increment and decrement
    void increment(void)
    {
        count++;
    }
    void decrement(void)
    {
        (count>0) ? (count--) : (count=0);
    }

    // get/set count
    int getCount(void)
    {
        return count;
    }
    int setCount(int value)
    {
        count = value;
        return 1;
    }

    // get/set max_value
    int getMaxValue(void)
    {
        return max_value;
    }

    int setMaxValue(int value)
    {
        max_value = value;
    }
};

int func(counter& c){
    return c.getMaxValue()+100;
}

int main()
{
    // test coounter
    counter c1();
    counter c2(10);

    c2.increment();
    cout << c2.getCount() << endl;
    c2.decrement();
    cout << c2.getCount() << endl;

    c2.setMaxValue(20);
    cout << c2.getMaxValue() << endl;

    // use class as function arguments
    int i = func(c2);
    cout<< i << endl;


    return 1;
}