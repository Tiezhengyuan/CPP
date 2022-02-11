#include <iostream> //cout
#include <vector> //vector
#include <numeric> //accumulate()


using namespace std;

vector <int> recursion(vector <int> com, vector <int> sub)
{
    
}
vector <vector <int>> combinate_arr(vector <int> &arr, int len)
{
    vector <vector <int>> res2;
    for(int i = 0; i < arr.size(); i++){

    }

}


vector <int> detect_sum(vector<int> &arr, int sum)
{
    for(int len=0; len<arr.size(); len++){
        vector <vector <int>> res2= combinate_arr(&arr, len);
        for(int m=0; m<res2.size(); m++){
            vector <int> res = res2[m];
            if(accumulate(res.begin(), res.end(),0)==sum){
                return res;
            }
        }
    }
}

int main(){
    
    vector <int> arr = {5,13,23,9,3};
    vector <int> res = detect_sum(arr, 28);
    cout << accumulate(res.begin(), res.end(), 0) << endl;
    return 0;
}

