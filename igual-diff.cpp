#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	int n1,n2;
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite um n�mero: ";
	cin >> n1;
	cout << " Digite um n�mero: ";
	cin >> n2;
	
	if (n1 > n2) {
		cout << n1 << " � maior! "<<endl;
	}
	else if (n1 < n2) {
		cout << n1 << " � menor!"<<endl;
	}
	else {
		cout << " S�o iguais! "<<endl;
	}
return 0;
	
}
