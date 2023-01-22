#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x,y; 
	
	cout << " Digite a tabuada desejada: " <<endl;
	cin >> x;
	
	for (y = 1 ; y <= 10 ; y++)
	
	cout << x << " X " << y << " = " << x * y << endl; 
	
	return 0;
	
}
	
