#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru-RU");
	int task;
	cout << "Введите номер задания: ";
	cin >> task;

	switch (task)
	{
	case 1:
	{
		system("cls");
		cout << "Вы выбрали 1 задание\n\n";
		cout << "---------------------------\n\n";
		cout << "Ночевала тучка золотая\nНа груди утеса-великана;\nУтром в путь она умчалась рано,\nПо лазури весело играя;\n\nНо остался влажный след в морщине\nСтарого утеса.Одиноко\nОн стоит, задумался глубоко,\nИ тихонько плачет он в пустыне." << endl;
		cout << "---------------------------\n\n";
		return main();
	}
	case 2:
	{
		system("cls");
		float temperature1;
		int a = 9;
		int b = 5;
		int y = 32;
		cout << "Вы выбрали 2 задание\n\n";
		cout << "---------------------------\n\n";
		cout << "Введите температуру в градусах по Цельсию: ";
		cin >> temperature1;
		float temperature2 = ((temperature1 * a / b) + y);
		cout << "Температура по Фаренгейту: " << temperature2 << endl;
		return main();
	}
	case 3: {
		system("cls");
		cout << "Вы выбрали 3 задание\n\n";
		cout << "---------------------------\n\n";
		int a, b, c, d, nominator, denominator, nod;
		char s;
		cout << "Введите первую дробь: ";
		cin >> a >> s >> c;
		cout << "Введите вторую дробь: ";
		cin >> b >> s >> d;
		nominator = (a * d + b * c);
		denominator = (c * d);

		if (nominator < denominator) {
			for (int i = 1; i < denominator; i++) {
				if ((nominator % i == 0) && (denominator % i == 0)) {
					nod = i;
				}
			}
		}
		else {
			for (int i = 1; i < nominator; i++) {
				if ((nominator % i == 0) && (denominator % i == 0)) {
					nod = i;
				}
			}
		}
		if (nominator % denominator == 0) {
			cout << "Сумма равна: " << nominator / nod << endl;
		}
		else {
			cout << "Сумма равна: " << nominator / nod << "/" << denominator / nod << endl;
		}
		return main();
	}
	case 4: {
		system("cls");
		cout << "Вы выбрали 4 задание\n\n";
		cout << "---------------------------\n\n";
		float pound, shilling, pens, sum;
		cout << "Введите количество фунтов: ";
		cin >> pound;
		cout << "Введите количество шиллингов: ";
		cin >> shilling;
		cout << "Введите количество пенсов: ";
		cin >> pens;
		sum = pound + (shilling / 20) + (pens / 240);
		cout << "Десятичных фунтов: " << sum << endl;
		return main();
	}
	case 5: {
		system("cls");
		cout << "Вы выбрали 5 задание\n\n";
		cout << "---------------------------\n\n";
		float decpounds, decfrac, shilling, pens;
		int pounds;
		cout << "Введите число десятичных фунтов: ";
		cin >> decpounds;
		pounds = (int)decpounds;
		decfrac = decpounds - pounds;
		shilling = decfrac * 20;
		shilling = (int)shilling;
		pens = (decfrac * 20 - shilling) * 12;
		pens = (int)pens;
		cout << "Эквивалентная сумма в старой форме записи: " << pounds << "." << shilling << "." << pens << endl;
		return main();
	}
	}


}