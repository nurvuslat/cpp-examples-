//3 ve 5'e tam b�l�nen say�lar� tespit eden program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int i, sayi, adet = 0;

	for (i = 1; i <= 10; i++){
		cout << i << ". Say�y� Giriniz:";
		cin >> sayi;
	if (sayi % 3 == 0 && sayi % 5 == 0){
		adet++;
	}	

}
	cout << "3 ve 5'e B�l�nen Say� Adeti:" << adet;
	
	
	
	
}
