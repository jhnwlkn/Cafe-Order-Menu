#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int makanan(int y){
	int jml, pri, tot, byr, kbl;
	switch (y)
        {
        case 1:
    	cout << '\n' << "1. aaa" <<endl;
        pri = 10000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<<tot<<endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp."<<kbl<<endl;
        break;
                    
        case 2:
        cout<<'\n'<<"2. bbb"<<endl;
        pri=10000;
    	cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
    	cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
                    
        case 3:
        cout<<'\n'<<"3. ccc"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
                    
        case 4:
        cout<<'\n'<<"4. ddd"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
                    
        case 5:
    	cout<<'\n'<<"5. eee"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
        }
}

int minuman(int p){
	int jml, pri, tot, byr, kbl;
	switch (p)
        {
        case 1:
    	cout << '\n' << "1. aaa" <<endl;
        pri = 10000;
        cout << "Masukan Jumlah Porsi : ";
        cin >> jml;
        tot = pri*jml;
        cout << "Total Harganya\t: Rp. "<<tot<<endl;
        cout << "Dibayar\t\t: Rp. ";
        cin >> byr;
        kbl = byr-tot;
        cout << "Kembali\t\t: Rp."<<kbl<<endl;
        break;
                    
        case 2:
        cout<<'\n'<<"2. bbb"<<endl;
        pri=10000;
    	cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
    	cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
                    
        case 3:
        cout<<'\n'<<"3. ccc"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
                    
        case 4:
        cout<<'\n'<<"4. ddd"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
                    
        case 5:
    	cout<<'\n'<<"5. eee"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah Porsi : ";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total Harganya\t: Rp. "<<tot<<endl;
        cout<<"Dibayar\t\t: Rp. ";
        cin>>byr;
        kbl=byr-tot;
        cout<<"Kembali\t\t: Rp. "<<kbl<<endl;
        break;
        }
}

int main(){
	int x,y,r,p;
	char z;
	int jml, pri, tot, byr, kbl;
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
