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
	
	if(menu < 1 || menu > 2) {
		cout << "Menu Tidak Tersedia\n";
	} else {
		for( int i = 0; i < 5; i++) {
			cout<<i+1<<"."<<nama[menu-1][i]<<"\t\tRp. "<<harga[menu-1][i]<<endl;
		}
		
		cout << "\nMau memesan makanan? (y/n)\t: ";
		cin >> pilihan;
		
		if(pilihan == 'Y' || pilihan == 'y'){
			cout << "Silahkan masukan pesanan anda\t: ";
			cin >> index;

			if(index < 1 || index > 5) {
				cout << "Menu Tidak Tersedia\n";
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
					cout << "Terimakasih sudah memesan!";
				}
			}
		} else if (pilihan == 'N' || pilihan == 'n'){
			cout << "Apakah anda yakin tidak ingin memesan? (y/n) : ";
			cin >> pilihan;
			
			if (pilihan == 'Y' || pilihan == 'y'){
				system("cls");
				cout << "Terimakasih sudah mengunjungi Wr Ilkom!";
				exit(0);
			} else if (pilihan == 'N' || pilihan == 'n'){
		} else {
			cout << "\nPilihan tidak tersedia!"<< endl;
		}
	}
}

int main() {	
	int menu;
	char pilihan = 'y';
	
	menu:	cout << "\tSelamat Datang di Wr Ilkom" << endl;
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
