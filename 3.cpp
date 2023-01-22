#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,n;
	
	cout << " Insira um número: ";
	cin >> x ;
	cout << " Insira um número: ";
	cin >>  y ;
	
	n=(x+y);
	
	if (n%2==0) {
		cout << " Par ";
	} 
	else{
		cout << " Impar ";
	}
	
	return 0;
}	
