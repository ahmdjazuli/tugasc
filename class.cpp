#include <iostream>
#include <Windows.h> // gsn warnany
using namespace std;

void warnax(unsigned short color){
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,color);
}

/* daftar warna :
	1:biru tua, 2: hijau tua
*/

class mainan{
	public:
		double kapasitasRAM;
};

class smartphone{
	public :
		void maingame(mainan games, smartphone phone);
		double kapasitasRAM;
		int rkameraDepan;
		int rkameraBelakang;
};

smartphone XiaomiRedmi5A, iPhone8Plus; // objek dari class smartphone
mainan mobilelegend,tricky;  //objek dari class mainan

void smartphone::maingame(mainan games,smartphone phone){
	cout << " RESULT for Your Specification!"<<endl;
	if (games.kapasitasRAM<phone.kapasitasRAM){
		cout << "Game dapat kamu mainkan!!"<<endl;
		cout<< "Ram = Good"<<endl;
	} else {
		cout<< "Ram = Bad"<<endl;
	};
}

void listgame(){
	cout << "================================"<<endl;
	cout << "  ======== LIST GAME ========="<<endl;
	cout << "================================"<<endl<<endl;
	cout << "| 1. Mobile Legend | 2. Tricky  |"<<endl;
	cout << "================================"<<endl;
}

int main(){
	string liat; cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(2);
	char pp; // untuk percabangan switch dibawah
	
	// kapasitas Ram dari Mainan
	tricky.kapasitasRAM = 1;
	mobilelegend.kapasitasRAM = 3;
	
	//kapasitas Ram dari Smartphone
	XiaomiRedmi5A.kapasitasRAM = 2;
	iPhone8Plus.kapasitasRAM = 4;
	
	// Resolusi kamera smarthphone
	XiaomiRedmi5A.rkameraDepan = 5;
	XiaomiRedmi5A.rkameraBelakang = 12;
	iPhone8Plus.rkameraDepan = 8;
	iPhone8Plus.rkameraDepan = 20;
	
	cout << "|==== CEK SmartPhone sebelum mau BELI ====|"<<endl;
	cout << "|========= 1. xiaomi | 2. iphone ======== |"<<endl;
	cout << "|=========================================|"<<endl;
	cout << "| Data Smartphone yang ingin kamu liat : ";cin>>liat;
		if(liat=="1"){
			cout << " Nama Smartphone    = Xiaomi Redmi 5A"<<endl;
			cout << " Kamera Depan       = "<<XiaomiRedmi5A.rkameraDepan<<"MP"<<endl;
			cout << " Kamera Belakang    = "<<XiaomiRedmi5A.rkameraBelakang<<"MP"<<endl;
			cout <<" Kapasitas Ram       = "<<XiaomiRedmi5A.kapasitasRAM<<"GB"<<endl<<endl; //double
			system("cls");listgame(); //memanggil fungsi listgame
			sini:
			cout << "Kamu mau maen Game apa : ";cin>>pp;
				switch(pp){
			case '1' :
				XiaomiRedmi5A.maingame(mobilelegend, XiaomiRedmi5A);
				break; // utk mengakhiri kondisi percabangan
			case '2' :
				XiaomiRedmi5A.maingame(tricky, XiaomiRedmi5A);
				break;	
			default :
				cout << "Kode yang anda masukkan SALAH! pilih lagi."<< endl; goto sini;
				} //akhir switch
		}else if(liat=="2"){
			cout << " Nama Smartphone = iPhone 8 Plus"<<endl;
			cout << " Kamera Depan       = "<<iPhone8Plus.rkameraDepan<<"MP"<<endl;
			cout << " Kamera Belakang    = "<<iPhone8Plus.rkameraBelakang<<"MP"<<endl;
			cout <<" Kapasitas Ram   = " <<(iPhone8Plus.kapasitasRAM)<<"GB"<<endl; 
			system("cls");listgame(); //memanggil fungsi listgame
			sini2:
			cout << "Kamu mau maen Game apa : ";cin>>pp;
				switch(pp){
			case '1' :
				iPhone8Plus.maingame(mobilelegend, iPhone8Plus);
				break; // utk mengakhiri kondisi percabangan
			case '2' :
				iPhone8Plus.maingame(tricky, iPhone8Plus);
				break;	
			default :
				cout << "Kode yang anda masukkan SALAH! pilih lagi."<< endl; goto sini2;
				} //akhir switch
		}else{
			cout << "ERROR 405! Kode yang anda masukkan SALAH!";
		}//akhir percabangan
}
