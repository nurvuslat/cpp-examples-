//Girilen say�n�n asal olup olmad���n� bulan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	
	int i, sayi, asalKontrol;
	asalKontrol = 0;
	
	cout << "Bir Say� Giriniz:";
	cin >> sayi;
	
	for (i = 2; i <= sayi / 2; i++){
		if (sayi % i == 0){
			asalKontrol = 1;
			cout << "Say�n�z Asal De�ildir";
			break;
		}
	}
	if (asalKontrol == 0){
		cout << "Say�n�z Asald�r";
	}
	
	
	
	
	
	
	
	
	
	
	
		
}
