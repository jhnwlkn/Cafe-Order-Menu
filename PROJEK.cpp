#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int kembali (int kbl){
	int byr;
	if (kbl <0){
        	cout << "Pembayaran kurang"<< endl;
        	cout << "Masukan saldo tambahan : ";
        	cin >> byr;
        	kbl = byr + kbl;
        	cout << "Kembali\t\t: Rp."<< kbl << endl;
		}
}
int makanan(int y){
	int jml, pri, tot, byr, kbl;
	switch (y)
        {
        case 1:
    	cout << '\n' << "1. Aussie Burger" << endl;
        pri = 75000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp."<< kbl << endl;
		kembali (kbl);
		cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 2:
        cout << '\n' << "2. Fish n' Chips" << endl;
        pri = 85000;
    	cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
    	cout << "Total Harganya\t: Rp. "<< tot <<endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl << endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
		break;
                    
        case 3:
        cout << '\n' << "3. Curry dogs" << endl;
        pri = 50000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl << endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 4:
        cout << '\n' << "4. Chicken Wings (6pcs)" << endl;
        pri = 35000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl <<endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 5:
    	cout << '\n' << "5. Sirloin steak" <<endl;
        pri = 135000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl << endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
        }
}

int minuman(int p){
	int jml, pri, tot, byr, kbl;
	switch (p)
        {
        case 1:
    	cout << '\n' << "1. Smoothie Avocado" <<endl;
        pri = 19000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<<tot<<endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp."<<kbl<<endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 2:
        cout << '\n' << "2. Lychee Tea" << endl;
        pri = 15000;
    	cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
    	cout << "Total Harganya\t: Rp. "<< tot <<endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl << endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 3:
        cout << '\n' << "3. Chocolate Blend" << endl;
        pri = 25000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl << endl;
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 4:
        cout << '\n' << "4. Strawberry Sourties" << endl;
        pri = 25000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl <<endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
                    
        case 5:
    	cout << '\n' << "5. Mocha Latte Ice" <<endl;
        pri = 23000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<< tot << endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp. "<< kbl << endl;
        kembali (kbl);
        cout<<"Terimakasih sudah mengunjungi Wr Sultod!";
        break;
        }
}

int main(){
	int x,y,r,p;
	char z;
	int jml, pri, tot, byr, kbl;
	string a[5]={"1.Aussie Burger\t\t\tRp. 75.000", "2.Fish n' Chips\t\t\tRp. 85.000", "3.Curry dogs\t\t\tRp. 50.000", "4.Chicken Wings (6pcs)\t\tRp. 35.000", "5.Sirloin steak\t\t\tRp. 135.000"};
	string b[5]={"1.Smoothie Avocado\t\tRp. 19.000", "2.Lychee Tea\t\t\tRp. 15.000", "3.Chocolate Blend\t\tRp. 25.000", "4.Strawberry Sourties\t\tRp. 25.000", "5.Mocha Latte Ice\t\tRp. 23.000"};
	int c[5];
	int d[5];
	
	menu:
		cout << "\tSelamat Datang di Wr Sultod" << endl;
		cout << "\nMau pesan apa : " << endl;
		cout << "1. Makanan" << endl;
		cout << "2. Minuman" << endl;
		cin >> x;
		system ("cls");
	
		if (x==1){
			for (int i=0; i<5; i++){
				cout << a[i] << endl;	
			}
			cout << "Mau memesan makanan? (Y/N)\n";
			cin >>z;
			
			if (z=='Y' || z=='y'){
				cout << "\n(masukan angka dalam menu (cth : aaa maka ketik '1')\n";
				cout << "Silahkan masukan pesanan anda \t:  ";
				cin >> y;
				makanan (y);
				
			} else if( z =='N' || z=='n'){
				system("CLS");
				cout<<"Terimakasih sudah mengunjungi Alm Markfood!";
			}
		} else if (x==2){
			for (int i=0; i<5; i++){
				cout << b[i] << endl;
			}
			cout << "Mau memesan minuman? (Y/N)\n";
			cin >>r;
			
			if (r=='Y' || r=='y'){
				cout << "\n(masukan angka dalam menu (cth : aaa maka ketik '1')\n";
				cout << "Silahkan masukan pesanan anda \t:  ";
				cin >> p;
				minuman (p);
				
			} else if( r =='N' || r=='n'){
				system("CLS");
				cout<<"Terimakasih sudah mengunjungi Alm Markfood!";
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
