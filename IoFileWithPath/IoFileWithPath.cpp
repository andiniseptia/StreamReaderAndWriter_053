#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File : ";
	cin >> NamaFile;

	// Membuka file dalam mode menulis 
	ofstream outfile;
	// Menunjuk ke sebuah nama file 
	outfile.open(NamaFile + ".txt", ios::out);

	cout << "> Menulis file, \'q\' untuk keluar" << endl;

	// Unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// Loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		// Menulis dan memasukkan nilai dari 'baris' kedalam file
		outfile << baris << endl;
	}
	// Selesai dalam menulis sekarang tutup filenya
	outfile.close();

}
