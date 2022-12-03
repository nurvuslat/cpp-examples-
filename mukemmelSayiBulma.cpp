// Girilen sayýnýn mükemmel sayý olup olmadýðýný bulan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int sayi, bolen, carpanToplami = 0;
	
	cout << "Sayýyý giriniz:";
	cin >> sayi;
	
	for (bolen = 1; bolen <= sayi / 2; bolen++){
		
		if (sayi % bolen == 0){
		
		carpanToplami += bolen;	
	}

}
	if (sayi == carpanToplami){
		cout << "Mükemmel Sayýdýr";
	}
	else{
		cout << "Mükemmel Sayý Deðildir";
	}
	
}
