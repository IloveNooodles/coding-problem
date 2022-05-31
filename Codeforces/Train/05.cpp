#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a, b;
    cin >> a >> b;
    cout << fixed;
    cout << setprecision(2);
    cout << (a * b)/2 << endl;
    return 0;
}

