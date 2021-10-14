#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;



int main(){
	int x,y;
	char z;
	string a[5]={"1.aaa\tRp. 10.000", "2.bbb\tRp. 10.000", "3.ccc\tRp. 10.000", "4.ddd\tRp. 10.000", "5.eee\tRp. 10.000"};
	string b[5]={"1.aaa\tRp. 10.000", "2.bbb\tRp. 10.000", "3.ccc\tRp. 10.000", "4.ddd\tRp. 10.000", "5.eee\tRp. 10.000"};
	int c[5];
	int d[5];
	
	menu:
		cout << "\tSelamat Datang di Alm Markfood" << endl;
		cout << "\nMau pesan apa : " << endl;
		cout << "1. Makanan" << endl;
		cout << "2. Minuman" << endl;
		cin >> x;
		system ("cls");
	
		if (x==1){
			for (int i=0; i<6; i++){
				cout << a[i] << endl;	
			}
			cout << "Mau memesan makanan? (Y/N)\n";
			cin >>z;
			
			if (z=='Y' || z=='y'){
				cout << "\n(masukan angka dalam menu (cth : aaa maka ketik '1')\n";
				cout << "Silahkan masukan pesanan anda \t:  ";
				cin >> y;
				
			} else if( z =='N' || z=='n'){
				system("CLS");
				cout<<"Terimakasih sudah mengunjungi Alm Markfood!";
			}
		} else if (x==2){
			for (int i=0; i<6; i++){
				cout << b[i] << endl;
			}
		} else {
			cout << "Menu Tidak Tersedia\n";
			cout << "Apakah mau mengulang pemesanan? (Y/N)\n";
			cin >> z;
			
			if (z=='Y' || z=='y'){
				system("CLS");
				goto menu;			
			}
			
			else if( z =='N' || z=='n'){
				system("CLS");
				cout<<"Terimakasih sudah mengunjungi Alm Markfood!";
			}
			
		}
}
