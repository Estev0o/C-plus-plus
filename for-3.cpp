#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x; 
	
	for (x = 0; x <=30; x ++)
	
	if (x %2 == 1) {
	cout << " Os n�meros impares s�o: " << x << endl; 
	
	}
	
	return 0;
	}
