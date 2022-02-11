#include <iostream>

using namespace std;

class Box{
private:
    int length, width, height;
public:
    Box(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;
    }
    Box(int length){
        this->length = this->width = this->height = length;
    }
    int getVolume(void){
        int v= this->length * this->height * this->width;
        return v;
    }
    int operator+(const Box &b2){
        this->length += b2.length;
        this->width += b2.width;
        this->height += b2.height;
    }
};

int main(){
    Box b1(1,2,4), b2(5);
    cout << b1.getVolume() << endl;
    cout << b2.getVolume() << endl;
    b1 + b2;
    cout << b1.getVolume() << endl;    
    return 1;
}