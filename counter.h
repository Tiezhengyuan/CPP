//define counter class

// avoid duplicate loading
#ifndef COUNTER_H
#define COUNTER_H

class counter
{
    public:
        // constructors
        counter();
        counter(int);

        // 
        void increment();
        void decrement();

        // 
        void setCount(int);
        int getCount();
    private:
        //attributes
        int count;
        int max_value;

}; //class must end with semicolon
#endif