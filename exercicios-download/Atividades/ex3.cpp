#include <iostream>

using namespace std;

int main(){
	float real, pila;
	int c2, c5, c15, c25, c50, c75, resto;
	
	cout << "Digite um valor em reais\n" << "R$ ";
	cin >> real;
	
	cout << "Valor em pila:\n";
	
	resto = real;
	c75 = resto/75;
	resto = resto%c75;
	c50 = resto/50;
	resto = resto%c50;
	c25 = resto/25;
	resto = resto%c25;
	c15 = resto/15;
	resto = resto%c15;
	c5 = resto/5;
	resto = resto%c5;
	c2 = resto/2;
	resto = resto%c2;
	
	cout << c75 << " x " << "P$ 75\n";
	cout << c50 << " x " << "P$ 50\n";
	cout << c25 << " x " << "P$ 25\n";
	cout << c15 << " x " << "P$ 15\n";
	cout << c5 << " x " << "P$ 5\n";
	cout << c2 << " x " << "P$ 2\n";
	
	return 0;
}
