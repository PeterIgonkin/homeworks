#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b;
	cin >> a >> b;
	if ((a > 12 || a < 1) || (b > 31 || b < 1)) {
		cout << "Ошибка";
		system("pause");
	}
	cout << "До Нового года осталось: ";
	switch (a) {
	case 1:
		cout << 365 - b << " дней!\n";
		break;
	case 2:
		if (b < 29) {
			cout << 365 - (31 + 28 - (28 - b)) << " дней!\n";
		}
		else {
			cout << 365 - (31 + 28 - (28 - b)) + 1 << " дней!\n";
		}
		break;
	case 3:
		cout << 365 - (31 * 2 + 28 - (31 - b)) << " дней!\n";
		break;
	case 4:
		cout << 365 - (31 * 2 + 28 + 30 - (30 - b)) << " дней!\n";
		break;
	case 5:
		cout << 365 - (31 * 3 + 28 + 30 - (31 - b)) << " дней!\n";
		break;
	case 6:
		cout << 365 - (31 * 3 + 28 + 30 * 2 - (30 - b)) << " дней!\n";
		break;
	case 7:
		cout << 365 - (31 * 4 + 28 + 30 * 2 - (31 - b)) << " дней!\n";
		break;
	case 8:
		cout << 365 - (31 * 5 + 28 + 30 * 2 - (31 - b)) << " дней!\n";
		break;
	case 9:
		cout << 365 - (31 * 5 + 28 + 30 * 3 - (30 - b)) << " дней!\n";;
		break;
	case 10:
		cout << 365 - (31 * 6 + 28 + 30 * 3 - (31 - b)) << " дней!\n";;
	case 11:
		cout << 365 - (31 * 6 + 28 + 30 * 4 - (30 - b)) << " дней!\n";;
		break;
	case 12:
		cout << 365 - (31 * 7 + 28 + 30 * 4 - (31 - b)) << " дней!\n";;
		break;
	}
	system("pause");
	return 0;
}