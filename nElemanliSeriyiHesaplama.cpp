//N elemanlý bir seriyi hesaplayan program (1+1/2+1/3+1/4+...1/n)

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	
	int i, sayi;
	float toplam;
	
	cout << "Bir Sayý Giriniz:";
	cin >> sayi;
	
	for (i = 1; i <= sayi; i++){
		toplam = toplam + 1.0 / i;		
	}
	
	cout << "Toplam:" << toplam;
	
	
}
