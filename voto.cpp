#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	int idade;
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite sua idade: ";
	cin >> idade;
	
	if (idade >==18 ) (idade <== 60) {
	cout << " Voto Obrigat�rio! ";
	}
	else  (idade >= 16) and (idade <= 18) {
	cout << " Voto opcional ! ";
	}
	else {
	Cout << " Voto n�o obrigat�rio";
	}
	
	return 0;
}
