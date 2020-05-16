#include <iostream>
using namespace std;

	int uc[15]={60,100,150,300,450,500,750,1000,2000,5000,10000,15000,25000,50000,100000};
	int harga_uc[15]={1400,40000,50000,74000,149000,359000,701000,1000000,1500000,2500000,3000000,3500000,4000000,5550000,7000000};
	int saldo = 10000000;
	int harga, pilih;
	char lagi;


int menu(){
	
	system("cls");
    
	cout<<"\n\n\n======DAFTAR JUMLAH UC BESERTA HARGANYA=====\n\n";
	cout << "\n|-------|-------------------|-------------|\n";
	cout << "| kode\t|\tJumlah UC   |\tHarga(Rp.)|\n";
	cout << "|-------|-------------------|-------------|\n";
		for (int y=0;y<15;y++){
			cout<<"|   "<<y+1<<"\t|\t"<<uc[y]<<"\tUC"<<"  |\t"<<harga_uc[y]<<"\t  |"<<endl;
		}
	cout << "|-------|-------------------|-------------|\n\n";

	do{

	cout<<"Pilih : ";
	cin>>pilih;
	switch (pilih){
			case 1:
				cout<<uc[0]<<" UC Rp"<<harga_uc[0]<<endl;
				break;	
			case 2:
				cout<<uc[1]<<" UC Rp"<<harga_uc[1]<<endl;
				break;
			case 3:
				cout<<uc[2]<<" UC Rp"<<harga_uc[2]<<endl;
				break;
			case 4:
				cout<<uc[3]<<" UC Rp"<<harga_uc[3]<<endl;
				break;
			case 5:
				cout<<uc[4]<<" UC Rp"<<harga_uc[4]<<endl;
				break;
			case 6:
				cout<<uc[5]<<" UC Rp"<<harga_uc[5]<<endl;
				break;
			case 7:
				cout<<uc[6]<<" UC Rp"<<harga_uc[6]<<endl;
				break;
			case 8:
				cout<<uc[7]<<" UC Rp"<<harga_uc[7]<<endl;
				break;
			case 9:
				cout<<uc[8]<<" UC Rp"<<harga_uc[8]<<endl;
				break;
			case 10:
				cout<<uc[9]<<" UC Rp"<<harga_uc[9]<<endl;
				break;
			case 11:
				cout<<uc[10]<<" UC Rp"<<harga_uc[10]<<endl;
				break;
			case 12:
				cout<<uc[11]<<" UC Rp"<<harga_uc[11]<<endl;
				break;
			case 13:
				cout<<uc[12]<<" UC Rp"<<harga_uc[12]<<endl;
				break;
			case 14:
				cout<<uc[13]<<" UC Rp"<<harga_uc[13]<<endl;
				break;
			case 15:
				cout<<uc[14]<<" UC Rp"<<harga_uc[14]<<endl;
				break;
			default:
				goto nn;
				break;
				
			}
	
		cout<<"\nJumlah UC\t: "<<uc[pilih-1];
		cout<<"\nHarga UC\t: Rp."<<harga_uc[pilih-1];
		harga = harga + harga_uc[pilih-1];
		cout<<"\n\nNominal yang harus dibayar\t: Rp."<<harga;
		nn:
		cout<<"\n\nApakah Anda ingin melanjutkan transaksi? (y/n) :";
		cin>>lagi;
		

 }while(lagi=='y'||lagi=='Y');
}
		
	void akhir(){
		system("cls");
		cout << "\n\n--------------------------------------------------\n";
		cout<<"STRUK TRANSFER :\n\n";	
		cout<<"Total harga pembelian UC\t\tRp."<<harga;
		cout<<"\nSaldo awal Anda\t\t\t\tRp."<<saldo;
		cout<<"\nSisa saldo Anda\t\t\t\tRp."<<saldo-harga;
		cout << "\n--------------------------------------------------\n";
		
		
	}
		
		
int main(){
		
	string username, pass;
	string un="chaeru_7", ps="F1B019036";
	
		ulang:	
		cout << "\n|------------------------------------------------|\n";
		cout<<"|====== SELAMAT DATANG DI MENU TOP UP PUBG ======|";
		cout << "\n|------------------------------------------------|";
		cout<<"\n\nMasukkan User name Anda\t: ";
		cin>>username;
		cout<<"\n\nMasukkan Password Anda\t: ";
		cin>>pass;
	
			if(username != un && pass != ps){
				system("cls");
				
				goto ulang;}
			else {
				system("cls");
				menu();
				akhir(); }
	
		cout << "\n\n|----------------------------------------------|\n";
		cout<<"|====TERIMAKASIH TELAH MEMILIH LAYANAN KAMI====|";
		cout << "\n|----------------------------------------------|";
	
system("pause");
}


