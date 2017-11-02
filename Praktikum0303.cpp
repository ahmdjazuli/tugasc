#include <iostream>
using namespace std;

int main(){
	int gajiJam = 20000, gajiPerminggu = 980000;
	int waktu[3],gajiLembur,gajiAwal,gajiTotal[4];
	
		cout << "waktu anda bekerja minggu ke-1   = "; cin >> waktu[0];
		if (waktu[0]>40){
			gajiLembur=(waktu[0]-40)*1.5*gajiJam;
			gajiTotal[0]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[0]=gajiPerminggu*0.85;
		}
}
