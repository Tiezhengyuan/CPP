#include <iostream> // cerr, cout, endl, ios::out
#include <fstream> //ofstream
#include <cstdlib>  // exit
#include <vector>
#include <string>
using namespace std;


int main(void) {
    ofstream outfile("F:\\cpp\\write.txt", ios::out);
    if(!outfile){
        cerr << "file can't be opened" << endl;
        exit(1);
    }

    vector<string> lines {"abc", "123"};
    for(string line: lines) {
        outfile << line << endl;
        // cout<< line;
    }

    return 1;
}

