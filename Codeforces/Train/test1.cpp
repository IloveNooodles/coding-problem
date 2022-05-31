#include <iostream>

using namespace std;

int main()
{
	int x, y, ans; // x sama y itu angka
	char z; //z itu tipe operator

	cout << "Masukkan x: ";
	cin >> x;
	cout << "Masukkan Y: ";
	cin >> y;
	cout << "masukkan operator: ";
	cin >> z;

	if(z == '+'){
		ans = x + y;
	} else if(z == '-'){
		ans = x - y;
	} else if (z == '*'){
		ans = x*y;
	} else if (z == '/'){
		ans = x/y;
	} else if (z == '%'){
		ans = x%y;
	}

	if(ans >= 0){
		if(ans == 0){
			cout << "Bilangan nol";
		}else cout << "Bilangan postif";
	}else cout << "bilangan negatif";
}
