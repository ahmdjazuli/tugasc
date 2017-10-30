#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cout << "nilai x = ";cin >> x;
	cout << "nilai y = ";cin >> y;
	
	if (x>y){
		z=x-y;
		cout << "x-y = " << z;
	}else{
		z=y-x;
		cout << "y-x = "<< z;
	}
}
