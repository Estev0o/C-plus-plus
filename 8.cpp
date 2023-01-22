#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
cout << " ------------------------ TABELA---------------------------- "<<endl;
cout << " Até 7 anos, pertence a categoria Infantil "<<endl;
cout << " De 8 a 10 anos, pertence a categoria Juvenil "<<endl;
cout <<  " De 11 a 17 anos, pertence a categoria Adolescente "<<endl;
cout <<  " Acima de 17 anos, pertence a categoria Adulto "<<endl;
cout <<  " Acima de 60 anos, pertence a categoria  Idoso "<<endl;
cout <<  "------------------------------------------------------- "<<endl;
cout <<  " Digite sua idade: "<<endl;
cin >> idade;

if (idade <=7) {
cout <<idade << " anos, Pertence a categoria Infantil! "<<endl;
}
else if (idade>=8 && idade<=10) {
cout << idade << " anos, Pertence a categoria Juvenil! "<<endl;
}
else if (idade>=11 && idade<=17) {

cout << idade<< " anos, Pertence a categoria Adolescente! "<<endl;
}

else if (idade>17 && idade<=59) {
cout << idade<< " anos, Pertence a categoria Adulto! ";
}

else {
cout << idade << " anos, Pertence a categoria Idoso ";
}
return 0;
}
