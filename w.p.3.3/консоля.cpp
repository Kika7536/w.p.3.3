#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int a;

	cout << "Введите число: ";
	cin >> a;
	cout << "-----Проверяем-----" << endl;

	if (a % 2 == 0) {
		cout << "Число " << a << " - четное" << endl;
	}
	else {
		cout << "Число " << a << " - нечетное" << endl;
	}
}