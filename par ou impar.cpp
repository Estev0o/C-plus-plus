#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	int x;
	setlocale(LC_ALL, "Portuguese");
	
	cout<< " Digite um número: ";
	cin >> x;	
	
	if(x %2==0) {
		cout << " o número " << x << " é par! ";
	}
	else {
	cout << "O número" << x << " é impar! ";
}

return 0;	
	
}
