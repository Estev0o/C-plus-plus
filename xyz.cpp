#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	int x,y,z,n;
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um n�mero: ";
	cin >> x;
	
	cout << "Digite um n�mero: ";
	cin >> y;
	
	cout << "Digite um n�mero: ";
	cin >> z;
	
	
	
	
	
	if (x + y > z) {
	cout << " O valor menor � " <<  z << endl;
		
	}
	
	else {
	cout << " O valor maior � " <<  z <<  endl;
	
}

return 0;

}
