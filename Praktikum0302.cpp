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
	  }else if (bidang=='S'){
	  	cout << "Nilai Alas = "; cin >> alas;
		cout << "Nilai Tinggi   = "; cin >> t;
		luas = 0.5*alas*t;
		cout << "Luas Segitiga adalah " << luas;
		}else if (bidang!='S'||bidang!='P'){
			cout << "KODE ERROR..!";
		}
}
