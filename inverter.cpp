#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	int a, b,aux;
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite um n�mero: ";
	cin >> a;
	cout << " Digite um n�mero: ";
	cin >> b;
	
	aux = b;
	b = a;
	a = aux;
	
	cout << " A vale " << a << endl;
	cout << " B vale " << b << endl;
	
	return 0;
	
	
	
}
