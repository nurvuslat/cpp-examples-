// Klavyeden girilen �ift say�lar� toplayan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int i, sayi, toplam;
	toplam = 0;
	
	for (i = 1; i <= 10; i++){
		cout << i << " . Say�y� Giriniz:";
		cin >> sayi;
	}
	if (sayi % 2 == 0){
		toplam += sayi;
	}
	cout << "�ift Say�lar�n Toplam�: " << toplam;
	
	
}
