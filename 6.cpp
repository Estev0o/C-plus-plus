#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,xuy;
	
	cout << " Digite um n�mero: ";
	cin >> x;
	cout << " Digite um n�mero: ";
	cin >> y;
	
	x == y;
	y == x;
	xuy == x;
	
	cout << x << " vale " <<y <<endl;
	cout << y << " vale " <<x <<endl;
		
	
	
	
	
	return 0;
}
