#include <iostream>
using namespace std;

int main(){
	int luas,l,alas,t;
	char bidang;
	cout << "jenis bidang (P atau S) ? "; cin >> bidang;
	  if (bidang=='P'){
	  	cout << "Nilai Tinggi  = "; cin >> t;
		cout << "Nilai Lebar   = "; cin >> l;
		luas = t*l;
		cout << "Luas Persegi Panjang adalah " << luas;
	  }
}
