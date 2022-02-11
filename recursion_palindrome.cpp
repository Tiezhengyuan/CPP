#include <iostream>

using namespace std;

bool palindrome(string str)
{
    int end = str.length()-1;
    if(end<=1){
        return 1;
    }else{
        if (str[0] == str[end]){
            return palindrome(str.substr(1,end-1));
        }else{
            return 0;
        }
    }
}

int main(int argc, char *argv[])
{
    cout << "level is " << palindrome("level")<< endl;
    cout << "deed is " << palindrome("deed")<< endl;
    cout << "mom is " << palindrome("mom")<< endl;
    cout << palindrome("456654")<< endl;
    return 1;
}