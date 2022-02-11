#include <iostream>
#include <string>
#include <vector>

using namespace std;

void recursion(string a, string sub, vector <string> &res)
{
    res.push_back(a+sub[0]);
    cout << a+sub[0] << ",";
    sub.erase(0,1);
    if(!sub.empty())
        recursion(a, sub, res);
}

vector <string> f(string str, int num)
{
    vector <string> res;
    if(num<=str.size() && num>=2)
    {
        int st= num -1;
        for(int i=0; i<str.size()-st; i++)
            recursion(str.substr(i,st), str.substr(i+st), res);
    }
    return res;
};



int main(){
    
    string seq = "ABCD";
    // two letters
    vector <string> res = f(seq,2);
    cout << "\t " << res[0] << endl;
    // three letters
    res = f(seq,3);
    cout << "\t " << res[0] << endl;
    // eight letters
    res = f(seq,8);
    cout << "\t " << res[0] << endl;
    // one letter
    res = f(seq,1);
    cout << "\t " << res[0] << endl;
    return 0;
}

