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
	cout << "waktu anda bekerja minggu ke-2   = "; cin >> waktu[1];
		if (waktu[1]>40){
			gajiLembur=(waktu[1]-40)*1.5*gajiJam;
			gajiTotal[1]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[1]=gajiPerminggu*0.85;
		}
	cout << "waktu anda bekerja minggu ke-3   = "; cin >> waktu[2];
		if (waktu[2]>40){
			gajiLembur=(waktu[2]-40)*1.5*gajiJam;
			gajiTotal[2]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[2]=gajiPerminggu*0.85;
		}
}
