#include <iostream> //Entrada e sa�da
#include <locale.h> 

using namespace std;

int main(){
	int x,y;
setlocale(LC_ALL,"Portuguese");

cout << "Digite um n�mero: ";
cin >> x;
cout << "Digite um n�mero: ";
cin >> y;

cout<< "Os n�meros escolhidos foram: " << x << " e " << y ;

if (x > y) {
cout << " o maior � o: "  << x ; 
}
else if (x < y) {

cout << " o maior � o:"  << y  ;
}
else {

cout << " Os n�meros s�o iguais ";
}
return 0;

}




