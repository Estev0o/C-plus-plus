#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	int n1,n2;
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite um número: ";
	cin >> n1;
	cout << " Digite um número: ";
	cin >> n2;
	
	if (n1 > n2) {
		cout << n1 << " É maior! "<<endl;
	}
	else if (n1 < n2) {
		cout << n1 << " É menor!"<<endl;
	}
	else {
		cout << " São iguais! "<<endl;
	}
return 0;
	
}
