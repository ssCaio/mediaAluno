
#include <iostream>
using namespace std;

int main()
{
	string aluno;
	double p1, p2, media;

	cout << "Digite seu nome:";
	cin >> aluno;

	cout << "Digite a nota da p1: ";
	cin >> p1;
	cout << "Digite a nota da p2: ";
	cin >> p2;

	while (p1 < 0 || p1 > 10 && p2 < 0 || p2 > 10) {
		cout << "As notas precisam estar no intervalo entre 0 e 10! \nPor favor, digite as notas novamente \n";
		cout << "Digite a nota da p1: ";
		cin >> p1;
		cout << "Digite a nota da p2: ";
		cin >> p2;

	}
	media = (p1 + p2) / 2;

	cout << "A media do aluno(a): " << aluno << " eh " << media; 
	if (media >= 6) {
		cout << " Conceito: APROVADO";
	}
	else {
		cout << " Conceito: REPROVADO";
	}


}


