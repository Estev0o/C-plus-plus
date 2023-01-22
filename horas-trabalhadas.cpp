#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int h,pg;
	
	cout << " A cada 1h você receberá R$5.50 "<<endl;
	
	cout << " Digite quantas horas você trabalhou hoje: " <<endl;
	cin >> h;
	
	
	pg = (h*5.50);
	
	cout << "Voce receberá R$ " << pg << " Por " << h << "h" " Trabalhadas";

return 0;
	
}
