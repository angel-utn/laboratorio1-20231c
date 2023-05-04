#include <iostream>

using namespace std;

int main()
{
    float n = 1.1;
    /// 1.10000001
    /// 1.100000000000001

    if(n == 1.1f){
        cout << "Es 1.1" << endl;
    }
    else{
        cout << "No es 1.1" << endl;
    }

    return 0;
}
