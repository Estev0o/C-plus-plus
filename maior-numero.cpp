#include <iostream> //Entrada e saída
#include <locale.h> 

using namespace std;

int main(){
	int x,y;
setlocale(LC_ALL,"Portuguese");

cout << "Digite um número: ";
cin >> x;
cout << "Digite um número: ";
cin >> y;

cout<< "Os números escolhidos foram: " << x << " e " << y ;

if (x > y) {
cout << " o maior é o: "  << x ; 
}
else if (x < y) {

cout << " o maior é o:"  << y  ;
}
else {

cout << " Os números são iguais ";
}
return 0;

}




