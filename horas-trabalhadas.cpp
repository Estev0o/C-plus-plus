#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int h,pg;
	
	cout << " A cada 1h voc� receber� R$5.50 "<<endl;
	
	cout << " Digite quantas horas voc� trabalhou hoje: " <<endl;
	cin >> h;
	
	
	pg = (h*5.50);
	
	cout << "Voce receber� R$ " << pg << " Por " << h << "h" " Trabalhadas";

return 0;
	
}
