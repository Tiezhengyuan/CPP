#include <iostream>
using namespace std;


class person{
public:
    int age;
    person(int a){  this->age=a; }
};

// out of class
bool operator==(person const &ps1, person const &ps2){
    if (ps1.age==ps2.age)
        return true;
    return false;
}


int main(){
  person p1(10), p2(20);
  if(p1==p2) cout<< "Age is equal!";
  else cout<< "Age is different";

  return 0;
}