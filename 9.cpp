#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,op;
	
	cout<< " ---Menu--- "<<endl;
	cout << "Escolha uma das opera��es abaixo: " <<endl;
	cout << " 1 - adi��o " <<endl;
	cout << " 2 - subtra��o " <<endl;
	cout << " 3 - multiplica��o " <<endl;
	cout << " 4 - divi�o " <<endl;
	cin >> op;
	
	cout << "Sua escolha foi: "<< op <<endl;
	
	cout << " Digite um n�mero: ";
	cin >>  x ;
	cout << "Digite mais um n�mero: ";
	cin >> y;
	
	switch (op) {
		case 1:
			cout << " adi��o: " << x + y;
			break;
		case 2:
			cout << " subtra��o: " << x - y;
			break;
		case 3:
			cout << " multiplica��o: " << x * y;
			break;
		case 4:
			cout << " Divis�o: " << x / y;
			break;
	
}
			
 

	return 0;
	
}
