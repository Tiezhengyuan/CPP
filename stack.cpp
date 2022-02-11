#include <iostream>
#include <stack>


using namespace std;

int main(){

    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "top element" << s.top() << endl;
    cout << "size of stack is " << s.size() << endl;
    s.pop();
    return 0;
}

