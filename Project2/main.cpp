#include<iostream>
#include<cstdlib>
using namespace std;
//#define MILI
//#define MILI 2
//#define CORREKT
//#define WHILE

void main()
{
	setlocale(LC_ALL, "ru");
#ifdef MILI

	system("chcp 1251");
	const double kmInMile = 1.609344;
	double distMile, distKm;
	cout << "Укажите расстояние в милях"; cin >> distMile;
	distKm = distMile * kmInMile;
	cout << "Расстояние в (км): " << distKm << endl;
	system("pause>nul");
	return 0;

#endif // MILI

#ifdef MILE 2
	const double InMile = 1.609344, InKm = 0.621371;
	double distKm, distMile;
	cout << "Укажите расстояние в километрах : "; cin >> distKm;
	distMile = distKm * InKm;
	cout << "Ваше расстояние в милях : " << distMile << endl;
	return 0;
#endif // MILI 2

#ifdef CORREKT
	int n, s = 0;
	cout << "Верхняя граница суммы : "; cin >> n;
	if (n > 0) {
		while (n) {
			s += n * n;
			n--;
		}
		cout << "Сумма квадратов : " << s << endl;
	}
	else {
		cout << "Указано некорректное значение" << endl;
	}
	system("pause>nul");
	return 0;
#endif // CORREKT
#ifdef   WHILE
	int a = 0;

	while (a < 10)

	{
		cout << "Hello Bebe " << a << endl;
		a++;
	}
#endif //WHILE
	
	
}

	
	