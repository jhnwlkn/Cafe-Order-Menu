#include <iostream>
#include <string>
using namespace std;

void printMenu(int menu) {
	char pilihan;
	int index;
	int jumlah;
	int bayar;
	int temp;
	
	string nama[2][5] = {{"Aussie Burger", "Fish n' Chips", "Curry dogs", "Chicken Wings", "Sirloin steak"},
						 {"Smoothie Avocado", "Lychee Tea\t", "Chocolate Blend", "Strawberry Sourties", "Mocha Latte Ice"}};
	int harga[2][5] = {{75000, 85000, 50000, 35000, 135000},
					   {19000, 15000, 25000, 25000, 23000}};
	
	system ("cls");
	
	switch (menu){
		case 1:
			for( int i = 0; i < 5; i++) {
				cout<<i+1<<"."<<nama[menu-1][i]<<"\t\tRp. "<<harga[menu-1][i]<<endl;
			}
			
			cout << "\nMau memesan makanan? (y/n)\t: ";
			cin >> pilihan;
			break;
			
		case 2:
			for( int i = 0; i < 5; i++) {
				cout<<i+1<<"."<<nama[menu-1][i]<<"\t\tRp. "<<harga[menu-1][i]<<endl;
			}
			
			cout << "\nMau memesan minuman? (y/n)\t: ";
			cin >> pilihan;
			break;
	}
	
	if(pilihan == 'Y' || pilihan == 'y'){
		k:
		cout << "Silahkan masukan pesanan anda\t: ";
		cin >> index;
		if(index < 1 || index > 5) {
			cout << "Menu Tidak Tersedia\n";
			goto k;
		} else {
			cout <<"\n"<<index<<"."<<nama[menu-1][index-1]<<endl;
	        cout << "Masukan Jumlah Porsi \t\t: ";
	        cin >> jumlah;
	        cout << "Total Harganya \t\t\t: Rp. "<< jumlah * harga[menu-1][index-1] << endl;
	        cout << "Dibayar \t\t\t: Rp. ";
	        cin >> bayar;
		        
	        while(bayar < (jumlah * harga[menu-1][index-1])) {
	        	cout << "\nPembayaran kurang sebanyak \t: Rp. "<< (jumlah * harga[menu-1][index-1]) - bayar << endl;
	        	cout << "Masukan saldo tambahan \t\t: Rp. ";
	        	cin >> temp;
	        	bayar += temp;
			}
									
			cout << "\nPesanan Selesai dibayar"<<endl;
			if(bayar > (jumlah * harga[menu-1][index-1])) {	
	        	cout << "Kembali\t\t\t\t: Rp. "<< bayar - (jumlah * harga[menu-1][index-1]) << endl;
			} else {
				cout << "Terimakasih sudah memesan!" << endl;
				exit(0);
			}
		}
	} else if (pilihan == 'N' || pilihan == 'n'){
		j:
		cout << "Apakah anda yakin tidak ingin memesan? (y/n) : ";
		cin >> pilihan;
			
		if (pilihan == 'Y' || pilihan == 'y'){
			system("cls");
			cout << "Terimakasih sudah mengunjungi Wr Ilkom!";
			exit(0);
		} else if (pilihan == 'Y' || pilihan == 'y'){
		} else {
			cout << "\nPilihan tidak tersedia!"<< endl;
			goto j;
		}
	} else {
		cout << "\nPilihan tidak tersedia!"<< endl;
	}
}

int main() {	
	int menu;
	char pilihan;
	
	menu:	
		cout << "\tSelamat Datang di Wr Ilkom" << endl;
		cout << "\nMau pesan apa" << endl;
		cout << "1. Makanan" << endl;
		cout << "2. Minuman" << endl;
		cout << "\nMasukkan Pilihan: ";
	
		cin >> menu;
		printMenu(menu);	
			
		cout << "\nMau mengulang pesanan? (y/n)\t: ";
		cin >> pilihan;
			
		if (pilihan == 'Y' || pilihan == 'y'){
			system("cls");
			goto menu;
		} else if (pilihan == 'N' || pilihan == 'n'){
			system("cls");
			cout<<"Terimakasih sudah mengunjungi Wr Ilkom!"<<endl;
		}

	return 0;
}
