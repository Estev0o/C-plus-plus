#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,z,w,m;
	
	cout << " Digite sua 1� nota: ";
	cin >> x;
	cout << " Digite sua 2� nota: ";
	cin >> y;
	cout << " Digite sua 3� nota: ";
	cin >> z;
	cout << " Digite sua 4� nota: ";
	cin >> w ;
	
	m =(x + y + z + w )/4 ;
	
	if ( m >= 7 ) {
		cout << " Aprovado! "<< endl;
		
	}
	
	else if  ( m >= 5 &&  m <7){
		cout << " Exame! " << endl;
		
	}
	
	else {
		cout << " Reprovado! " << endl;
	}
	
	
	return 0;
}
