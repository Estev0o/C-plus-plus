#include <iostream> //entrada e sa�da
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	int a,b;
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite um n�mero: ";
	cin >> a;
	cout << " Digite um n�mero: ";
	cin >> b;
	
	if(a >= b) {
	cout << " A ra�z �: " << sqrt (a) ;
}    
	
	else {
    cout << " N�mero inv�lido: ";
}

return 0;
    	
	}

	
	

