#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	cout << " Insira um n�mero: ";
	cin >> x;
	
	if (x > 0) {
		cout << "O n�mero " << x << " � positivo ";
		
}
	else {
		cout << "O n�mero " << x << " � negativo";
		
	}
	
	return 0;
	
	}
