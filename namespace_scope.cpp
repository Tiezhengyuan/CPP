#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

namespace Universe{
    int Galaxy=1;
}
namespace Universe{
    int Planet = Galaxy+2;
}
int main(void){
    Universe::Galaxy *=2;
    {
        using namespace Universe;
        Planet++;
    }
    cout << Universe::Galaxy << Universe::Planet;
    return 0;
}