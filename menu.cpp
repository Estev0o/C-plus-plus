#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int prato, escolha;
	
	cout << "___ Card�pio___" <<endl;
	cout << " 1 -> Feijoada - R$26.90 " <<endl;
	cout << " 2 -> Panquecas - R$20.00 " <<endl;
	cout << " 3 -> Churrasco - R$22.00" <<endl;
	cout << " 4 -> Fil� de frango - R$16.50" <<endl;
	
	cout << " Digite apenas o n�mero do prato: " <<endl;
	cin>> escolha;
	cout << " Quantos pratos? " << endl;
	cin >> prato;
	
	switch (escolha) {
		case 1:
			cout << " Feijoada R$ "<< prato*26.90;
			break;
		case 2:
			cout << " Panquecas R$ "<< prato*20.00;
			break;
		case 3:
			cout << " Churrasco R$ " << prato*22.00;
			break;
		case 4:
			cout << " Fil� de frango " << prato*16.50;
			break;
		
}
	
	return 0;
}
