#include <iostream> //entrada e saída
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	int a,b;
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite um número: ";
	cin >> a;
	cout << " Digite um número: ";
	cin >> b;
	
	if(a >= b) {
	cout << " A raíz é: " << sqrt (a) ;
}    
	
	else {
    cout << " Número inválido: ";
}

return 0;
    	
	}

	
	

