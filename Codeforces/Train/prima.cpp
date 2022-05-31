#include <iostream>
using namespace std;

int main(){
    int count = 0, bilprima = 2, n;
    cin >> n;

    while(count < n){
        bool prime = true;
        for(int i = 2; i <= bilprima - 1; i++){
            if(bilprima%i == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            cout << bilprima << " ";
            count++;
        }
        bilprima++;
    }
}
