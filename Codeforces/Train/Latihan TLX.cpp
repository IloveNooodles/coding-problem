#include <iostream>
using namespace std;

int main(){
    int a, faktor = a, arr[20];
    bool prima = true;
    cin >> a;

    for(int i = 2; i*i <= a; i++){
        if(a%i == 0){
            faktor = i;
            prima = false;
            break;
        }
    }
    if(prima){
        cout << a;
    }
    else{
    int temp = faktor;
        faktor = a / temp;

        for(int i = 1; i*i < faktor; i++){

        }

        cout << temp << " x " << faktor;
    }
}
