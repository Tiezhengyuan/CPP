#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

class A{
    public: void out(){cout<<"A";}
};
class B: public A{
    public: void out(){cout<<"B";}
};

int main(void) {
    // objects
    A a; a.out();
    B b; b.out();

    // convert child to parent
    A a1 = B(); a1.out();
    // wrong: can't convert parent to child
    // B b = A();
    
    cout << "\npointer" << endl;
    A *pa = new A(); pa->out();
    B *pb = new B(); pb->out();
    // convert child to parent
    pa = pb; pa->out();
    pa = new B(); pa->out();

    cout << "\ndowncast" << endl;
    // wrong: cant convert parent to child
    // pb= pa; pb->out();
    // downcast explicitly
    pb = (B*) &a; pb->out();
    pb = (B*) pa; pb->out();
    return 0;
}









