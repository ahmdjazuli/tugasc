#include <iostream>
using namespace std;

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
}
