#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	
	
	int m,n;
	int nim1[2][2];
	int nim2[2][2];
	int perkalian[2][2];
	
	cout<<"PERKALIAN MATRIK :"<<endl<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
	cout<<"Masukkan nilai Nim ke-1 "<<"["<<m<<"]["<<n<<"]"<<" = ";
	cin>>nim1[m][n];
	}
	}
	cout<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
	cout<<"Masukkan nilai Nim ke-2 "<<"["<<m<<"]["<<n<<"]"<<" = ";
	cin>>nim2[m][n];
	}
	}
	cout<<endl<<endl;
	cout<<"Hasil Perkalian : "<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
	perkalian[m][n]=nim1[m][n]*nim2[m][n];
	cout<<perkalian[m][n]<<" ";
	}
	cout<<endl;
	}
	system("pause");
	return 0;
	}

