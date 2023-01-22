#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,op;
	
	cout<< " ---Menu--- "<<endl;
	cout << "Escolha uma das operações abaixo: " <<endl;
	cout << " 1 - adição " <<endl;
	cout << " 2 - subtração " <<endl;
	cout << " 3 - multiplicação " <<endl;
	cout << " 4 - divião " <<endl;
	cin >> op;
	
	cout << "Sua escolha foi: "<< op <<endl;
	
	cout << " Digite um número: ";
	cin >>  x ;
	cout << "Digite mais um número: ";
	cin >> y;
	
	switch (op) {
		case 1:
			cout << " adição: " << x + y;
			break;
		case 2:
			cout << " subtração: " << x - y;
			break;
		case 3:
			cout << " multiplicação: " << x * y;
			break;
		case 4:
			cout << " Divisão: " << x / y;
			break;
	
}
			
 

	return 0;
	
}
