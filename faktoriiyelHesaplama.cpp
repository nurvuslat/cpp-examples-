// Fakt�riyel hesaplama program�

#include <iostream>
using namespace std;

main(){
	
	setlocale(LC_ALL,"Turkish");
	int i, sayi, faktoriyel;
	
	cout << "Fakt�riyeli Hesaplanacak Say�y� Giriniz:";
	cin >> sayi;
	
	for(i=1; i<=sayi; i++){
		faktoriyel *= i;
	}
	cout << "Sonu�: " << faktoriyel;
	
}
