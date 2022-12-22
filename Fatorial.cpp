#include <iostream>

using namespace std;

int main()
{
	int num;
	int fat;
	char cont = 'S';

	cout << "Calculadora de Fatorial \n\n";

	do {
		fat = 1;
		cout << "Digite o numero: ";
		cin >> num;

		for (int aux = 1; aux <= num; aux++)
		{
			fat = fat * aux;
		}
		cout << "O fatorial de " << num << " e: " << fat << endl;
		cout << "\n\nContinuar? [S/N]\n";
		cin >> cont;
		cout << "\n\n";
	} while (cont == 's' || cont == 'S');

	return 0;
}
