#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale (LC_ALL, "Portuguese"); 
	
	int c,f;
	
	cout << " Digite temperatura em graus celsius: "<<endl;
	cin >> c;
	
	f=(9*c+160)/5;
	
	cout << " A temperatura em Fahrenheit: " << f;
	
	return 0;
}
