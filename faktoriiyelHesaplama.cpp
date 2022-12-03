// Faktöriyel hesaplama programý

#include <iostream>
using namespace std;

main(){
	
	setlocale(LC_ALL,"Turkish");
	int i, sayi, faktoriyel;
	
	cout << "Faktöriyeli Hesaplanacak Sayýyý Giriniz:";
	cin >> sayi;
	
	for(i=1; i<=sayi; i++){
		faktoriyel *= i;
	}
	cout << "Sonuç: " << faktoriyel;
	
}
