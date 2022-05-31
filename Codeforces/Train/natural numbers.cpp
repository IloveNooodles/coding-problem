#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "The natural numbers are: " << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
    cout << "The sum of natural numbers are: " << endl;
    int result = 0;
    for(int i = 1; i <= n; i++){
        result = result + i;
    }
    cout << result;
}
