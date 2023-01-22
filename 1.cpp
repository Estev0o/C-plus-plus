#include <iostream>
#include <locale.h>

using namespace std;

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	
	int n,t;
	char m[20];
	
	cout << " Digite seu nome: ";
	cin >> m ;
	cout << " Insira o numero da sua matrícula: ";
	cin >>  m ;
	cout << " Digite sua turma: ";
	cin >> t ;
	
	return 0;
	}
	
	
