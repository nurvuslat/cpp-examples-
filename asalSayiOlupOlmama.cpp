//Girilen sayýnýn asal olup olmadýðýný bulan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	
	int i, sayi, asalKontrol;
	asalKontrol = 0;
	
	cout << "Bir Sayý Giriniz:";
	cin >> sayi;
	
	for (i = 2; i <= sayi / 2; i++){
		if (sayi % i == 0){
			asalKontrol = 1;
			cout << "Sayýnýz Asal Deðildir";
			break;
		}
	}
	if (asalKontrol == 0){
		cout << "Sayýnýz Asaldýr";
	}
	
	
	
	
	
	
	
	
	
	
	
		
}
