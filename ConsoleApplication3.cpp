#include <iostream>
#include "Machine.h"

using namespace std;

void Machine::remainder() 
{
	residue = money - price - price * precent;
	if (residue < 0) {
		cout << "Недостаточно средств!!!" << endl;
		residue = 0;
	}
	else {
		cout << "Операция прошла успешно! Спасибо за оплату!!!" << endl;
		money = residue;
	}
}

void Machine::credit(int debt)
{
	cout << "Ваш прошлый баланс составлял: " << money << endl;
	
	money += debt - debt * precent;

	cout << "Ваш текущий баланс: " << money << endl << "Долг банку составляет: " << debt << endl;
}

int main()
{	
	setlocale(LC_ALL, "Russian");

	Machine machine;
	int debt;

	while (true) {
		cout << "Введите кол-во денег: ";
		cin >> machine.money;

		cout << "Введите цену: ";
		cin >> machine.price;

		machine.remainder();

		cout << "Введите кол-во средств для пополнения: ";
		cin >> debt;

		machine.credit(debt);
	}
}

