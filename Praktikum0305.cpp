#include <iostream>
using namespace std;

int main(){
	int tinggi,berat;
	cout << "===== PROGRAM TES BADAN IDEAL KAMU =====" << endl;
	cout << "Berapa Tinggi badan kamu = "; cin >> tinggi;
	cout << "Berapa Berat badan kamu  = "; cin >> berat;
		if (berat<tinggi/2.5){
			cout << "Anda kekurangan Berat Badan/Underweight";
		}else if(tinggi/2.5 <= berat && berat <= tinggi/2.3){
			cout << "Badan Kamu IDEAL :D normal body";
		}else if(tinggi/2.3 < berat){
			cout << "Badan Kamu terlalu Berat/Gemuk :p/Overweight";
		}	
}
