#include <iostream>
#include <exception>
//untuk exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main() {
	cout << "Awal program" << endl; //penanda 1:
	try {
		array<int, 3>data = { 1, 2, 3 };
		//pesan array intereger 3 elemen
		cout << data.at(4)
	}
}