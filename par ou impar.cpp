#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	int x;
	setlocale(LC_ALL, "Portuguese");
	
	cout<< " Digite um n�mero: ";
	cin >> x;	
	
	if(x %2==0) {
		cout << " o n�mero " << x << " � par! ";
	}
	else {
	cout << "O n�mero" << x << " � impar! ";
}

return 0;	
	
}
