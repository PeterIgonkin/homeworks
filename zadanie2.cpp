#include <iostream>
#include <ctime>
using namespace std;
void cubes() {
	cout << rand() % 6 + 1 << endl;
	cout << rand() % 6 + 1 << endl;
}
void fibonacci(unsigned int n) {
	if (n == 0) {
		cout << 0;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		unsigned int pre = 0;
		unsigned int now = 1;
		for (int i = 0; i < n - 2; i++) {
			unsigned int temp = pre + now;
			pre = now;
			now = temp;
		}
		cout << now;
	}
}
int summa(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}
void pairs() {
	for (int i = 1; i < 10000; i++) {
		for (int j = 1; j < 10000; j++) {
			if ((i != j) && (summa(i) == j) && (summa(j) == i)) {
				cout << "Дружественная пара: " << i << ' ' << j << endl;
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	cubes();
	unsigned int n;
	cout << "Введите число: ";
	cin >> n;
	fibonacci(n);
	cout << endl;
	pairs();
	return 0;
}