// Fibonacci serisi olu�tuan program

#include <iostream>
using namespace std;

main(){
	
	int a = 1, b = 1, c, i;
	
	cout << a << " " << b;
	
	for (i = 0; i < 20; i++){
		c = a + b;
		a = b;
		b = c;
		
		cout << " " << c;
			
	}
			
}
