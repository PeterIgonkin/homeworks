#include <iostream>
#include <ctime>
using namespace std;
void cubes() {
	cout << rand() % 6 + 1 << endl;
	cout << rand() % 6 + 1 << endl;
}
void fibonacci(unsigned int n) {
	unsigned int pre = 0;
	unsigned int now = 1;
	for (int i = 0; i < n - 2; i++) {
		unsigned int temp = pre + now;
		pre = now;
		now = temp;
	}

	if (n == 0) {
		cout << 0;
	}
	else {
		cout << now;
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
	return 0;
}