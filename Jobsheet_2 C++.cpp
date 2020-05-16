#include <iostream>
using namespace std;

main (){
	int nim[6];
	
	cout << "Masukkan nim ke-1 : ";
	cin >> nim[0];
	cout << "Masukkan nim ke-2 : ";
	cin >> nim[1];
	cout << "Masukkan nim ke-3 : ";
	cin >> nim[2];
	cout << "Masukkan nim ke-4 : ";
	cin >> nim[3];
	cout << "Masukkan nim ke-5 : ";
	cin >> nim[4];
	cout << "Masukkan nim ke-6 : ";
	cin >> nim[5];

	cout <<"\n\nData Tersimpan"<<endl;	
	cout << "Nim ke-1 adalah " << nim[0] << endl;
	cout << "Nim ke-2 adalah " << nim[1] << endl;
	cout << "Nim ke-3 adalah " << nim[2] << endl;
	cout << "Nim ke-4 adalah " << nim[3] << endl;
	cout << "Nim ke-5 adalah " << nim[4] << endl;
	cout << "Nim ke-6 adalah " << nim[5] << endl;
	system("pause");
	return 0;

}

