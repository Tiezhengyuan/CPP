#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main(){


    vector<int> vec{0,1,0,0,5,0};
    vector<int>::iterator iter;
    for(iter=vec.begin(); iter!=vec.end();){

        if(*iter==0){

            // iterator point to the next if succeed
            iter=vec.erase(iter);
            cout << *iter<<endl;
        }else{
            iter++;
        }
    }
    cout << vec[0] << vec[1] << vec[2] << endl;
    return 0;
}

