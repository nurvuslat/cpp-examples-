// Girilen say�n�n m�kemmel say� olup olmad���n� bulan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int sayi, bolen, carpanToplami = 0;
	
	cout << "Say�y� giriniz:";
	cin >> sayi;
	
	for (bolen = 1; bolen <= sayi / 2; bolen++){
		
		if (sayi % bolen == 0){
		
		carpanToplami += bolen;	
	}

}
	if (sayi == carpanToplami){
		cout << "M�kemmel Say�d�r";
	}
	else{
		cout << "M�kemmel Say� De�ildir";
	}
	
}
