#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	
	int i,j;
	int nim1[2][2];
	int nim2[2][2];
	int pengurangan[2][2];
	
	cout<<"PENGURANGAN MATRIK : "<<endl<<endl;
	for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	cout<<"Masukkan Nim ke-1 "<<"["<<i<<"]["<<j<<"]"<<" = ";
	cin>>nim1[i][j];
	}
	}
	cout<<endl;
	for(i=0; i<2; i++){
	for(j=0; j<2; j++){
	cout<<"Masukan Nim ke-2 "<<"["<<i<<"]["<<j<<"]"<<" = ";
	cin>>nim2[i][j];
	}
	}
	cout <<endl<<endl;
	cout<<"Hasil Pengurangan"<<endl;
	for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	pengurangan[i][j]=nim1[i][j]-nim2[i][j];
	cout<<pengurangan[i][j]<<" ";
	}
	cout<<endl;
	}
	system("pause");
	return 0;
	}

