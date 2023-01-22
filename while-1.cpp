#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	x=1;
	while ( x <=100) {
		cout << x << endl;
		
		x++;
		
	
}
	return 0;
	}
