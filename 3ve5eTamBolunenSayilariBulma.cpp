//3 ve 5'e tam bölünen sayýlarý tespit eden program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int i, sayi, adet = 0;

	for (i = 1; i <= 10; i++){
		cout << i << ". Sayýyý Giriniz:";
		cin >> sayi;
	if (sayi % 3 == 0 && sayi % 5 == 0){
		adet++;
	}	

}
	cout << "3 ve 5'e Bölünen Sayý Adeti:" << adet;
	
	
	
	
}
