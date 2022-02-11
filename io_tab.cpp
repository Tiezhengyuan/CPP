#include <iostream> // cerr, cout, endl, ios
#include <fstream> // ofstream
#include <cstdlib> //exit
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void split(vector<string>& items, string& str, string sep=","){
    string::iterator iter;
    iter = search(str.begin(), str.end(), \
        sep.begin(), sep.end());
    items.push_back(string(str.begin(), iter));

    if(iter != str.end()){
        iter += sep.size();
        string sub(iter, str.end());
        split(items, sub, sep);
    }
}


int main(){
    string file_path = "F:\\cpp\\tab.txt";
    string sep = "\t";

    //write to text file separated by tab space
    ofstream outfile; //file object 
    outfile.open(file_path, ios::out);
    if(!outfile){
        cerr << "file can't be opened!" << endl;
        exit(1);
    }

    map<string, int> st {{"John",34},{"Mary",12},{"Cary",77}};
    outfile << "Name" << sep << "Age" << endl;
    for(pair<string, int> el: st){
        outfile << el.first << sep << el.second << endl;
    }
    outfile.close();

    // read from text file
    ifstream infile;
    infile.open(file_path, ios::in);
    string line;
    while(getline(infile, line)){
        // cout << ">>" <<  line << endl;
        vector<string> items;
        split(items, line, sep);
        cout << items[0] << "\t" << items[1] <<endl;
    }
    infile.close();
    return 1;
}
