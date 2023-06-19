#include <iostream>
using namespace std;

int main() {
	try {
		cout << " Selamat belajar di prodi ti UMY" << endl;
		throw 1; //melemparkan sebuah intereger maka
		cout << "Pertanyaan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain int maka blok ini akan dieksekusi*/
	}
}