#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	cout << " Insira um número: ";
	cin >> x;
	
	if (x > 0) {
		cout << "O número " << x << " é positivo ";
		
}
	else {
		cout << "O número " << x << " é negativo";
		
	}
	
	return 0;
	
	}
