#include <iostream> // cerr, cout, endl, ios::in
#include <fstream> //ifstream
#include <cstdlib>  // exit
using namespace std;


int main(void) {
    ifstream infile("F:\\cpp\\read.txt", ios::in);
    if(!infile){
        cerr << "file can't be opened" << endl;
        exit(1);
    }

    string line;
    while(infile >> line) {
        cout << line << endl;
    }

    return 1;
}

