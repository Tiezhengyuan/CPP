#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ToBinary(long unsigned int i){
    if(i<=0){
        return "0";
    }
    else if(i==1){
        return "1";
    }else{
        string reminder = to_string(i%2);
        long unsigned int quotient = i/2;
        return ToBinary(quotient) + reminder;
    }
}

int main(){
    
    long int i = 3456;
    vector <long unsigned int> d = {0, 1, 2, 456, 89763};
    for(int i=0; i<d.size(); i++){
        string s = ToBinary(d[i]);
        cout << "Binary of "<< d[i] << " is " << s << endl;
    }

    return 0;
}

