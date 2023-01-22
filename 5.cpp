#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int v;
	
	cout << " Digite um número: ";
	cin >> v;
	
	cout << " A tabuada do número " << v << " é:";
	cout << "------------------------------------- "<<endl;
	
	cout << (v*0)<<endl;
	cout << (v*1)<<endl;
	cout << (v*2)<<endl;
	cout << (v*3)<<endl;
	cout << (v*4)<<endl;
	cout << (v*5)<<endl;
	cout << (v*6)<<endl;
	cout << (v*7)<<endl;
	cout << (v*8)<<endl;
	cout << (v*9)<<endl;
	cout << (v*10)<<endl;
	
	
	
	return 0;
	
}
	
