#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	int x,y,z,n;
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um número: ";
	cin >> x;
	
	cout << "Digite um número: ";
	cin >> y;
	
	cout << "Digite um número: ";
	cin >> z;
	
	
	
	
	
	if (x + y > z) {
	cout << " O valor menor é " <<  z << endl;
		
	}
	
	else {
	cout << " O valor maior é " <<  z <<  endl;
	
}

return 0;

}
