#include <iostream>
using namespace std;
void chislo(int n) {
	if (n / 10 > 0) {
		chislo(n / 10);
	}
	cout << n % 10 << ' ';
}
void perevod(int k) {                //не знаю зачем и как сделать рекурсивно второе задание          
	int summa = 0;
	int base = 1;
	while (k) {
		summa += (k % 10) * base;
		k /= 10;
		base *= 2;
	}
	cout << summa;
}
void factorization(int n) {
	int b = 2;
	if (n == 1) {
		return;
	}
	for (b;;b++) {
		if (n % b == 0) {
			cout << b;
			factorization(n / b);
			return;
		}
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	int k;
	int r;
	cout << "Введите число: ";
	cin >> n;
	chislo(n);
	cout << "\n";
	cout << "Введите число: " << endl;
	cin >> k;
	perevod(k);
	cout << endl;
	cout << "Введите число: " << endl;
	cin >> r;
	factorization(r);
	return 0;
}