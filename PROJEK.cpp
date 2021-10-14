#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;



int main(){
	int x,y;
	char z;
	string a[10]={"1.aaa\tRp. 10.000", "2.bbb\tRp. 10.000", "3.ccc\tRp. 10.000", "4.ddd\tRp. 10.000", "5.eee\tRp. 10.000", "6.fff\tRp. 10.000", "7.ggg\tRp. 10.000" , "8.hhh\tRp. 10.000", "9.iii\tRp. 10.000", "10.jjj\tRp. 10.000"};
	string b[10]={"1.aaa\tRp. 10.000", "2.bbb\tRp. 10.000", "3.ccc\tRp. 10.000", "4.ddd\tRp. 10.000", "5.eee\tRp. 10.000", "6.fff\tRp. 10.000", "7.ggg\tRp. 10.000" , "8.hhh\tRp. 10.000", "9.iii\tRp. 10.000", "10.jjj\tRp. 10.000"};
	
	menu:
		cout << "\tSelamat Datang di John Markfood" << endl;
		cout << "\nMau pesan apa : " << endl;
		cout << "1. Makanan" << endl;
		cout << "2. Minuman" << endl;
		cin >> x;
		system ("cls");
	
		if (x==1){
			for (int i=0; i<10; i++){
				cout << a[i] << endl;	
			}
			cout << "Mau memesan makanan? (Y/N)\n";
			cin >>z;
			
			if (z=='Y' || z=='y'){
				cout << "(masukan angka dalam menu (cth : aaa maka ketik '1')\n";
				cout << "Silahkan masukan pesanan \t:  ";
				cin >> y;		
			}
			
			else if( z =='N' || z=='n'){
				system("CLS");
				cout<<"Terimakasih!";
			}
		} else if (x==2){
			for (int i=0; i<=10; i++){
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
				cout<<"Terimakasih!";
			}
			
		}
}
