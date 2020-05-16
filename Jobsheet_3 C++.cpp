#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	
	int i,x;
	int nim1[2][2];
	int nim2[2][2];
	int jumlah[2][2];
	
	cout<<"PENJUMLAHAN MATRIK :"<<endl<<endl;
	for (i=0; i<2; i++){
	for (x=0; x<2; x++){
	cout<<"Masukkan Nim ke-1 "<<"["<<i<<"]["<<x<<"]"<<" = ";
	cin>>nim1[i][x];
	}
	}
	
	
	cout<<endl;
	for(i=0; i<2; i++){
	for(x=0; x<2; x++){
	cout<<"Masukan Nim ke-2 "<<"["<<i<<"]["<<x<<"]"<<" = ";
	cin>>nim2[i][x];
	}
	}
	
	cout <<endl<<endl;
	cout <<"Hasil Penjumlahan :"<<endl;
	for (i=0; i<2; i++){
	for (x=0; x<2; x++){
	jumlah [i][x]=nim1[i][x]+nim2[i][x];
	cout<<jumlah[i][x]<<" ";
	}
 cout<<endl;
 }
 system("pause");
 return 0;
}

