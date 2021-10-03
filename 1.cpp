#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	cin >> a;
	if (a >= 100 && a < 1000)
	{
		cout << "Число трехзначное" << endl;

	}
	else
	{
		cout << "Число не трехзначное" << endl;
	}
	system("pause");
	return 0;
}
