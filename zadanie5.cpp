#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
template<typename t>
void printarr(t *mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i];
	}
}
template<typename t>
void inputarr(t* mas, int n) {
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
}
void palindrom(char *mas, int n) {
	for (int i = 0; i < n / 2; i++) {
		if (mas[i] != mas[n - i - 1]) {
			cout << "Это не палиндром" << endl;
			return;
		}
	}
	printarr(mas, n);
	cout << " - палиндром";
}
void sum(char mas[], int n) {
	char a[100];
	int sum = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		k += 1;
		if (mas[i] != '+') {
			a[k-1] = mas[i];
		}
		else {
			sum += atoi(a);
			strcpy_s(a, "");
			k = 0;
		}
	}
	sum += atoi(a);
	cout << sum << endl;
}
void fio(char mas[], int n) {
	char secName[60];
	int pause = 0;
	for(int i = 0; i < n; i++){
		if (mas[i] != ' ') {
			secName[i] = mas[i];
		}
		else {
			pause = i;
			break;
		}
	}
	secName[pause] = '\0';
	int k = 0;
	for (pause; pause < n; pause++) {
		if (mas[pause] == ' ') {
			cout << mas[pause + 1] << ".";
			k++;
			if (k == 2) {
				break;
			}
		}
	}
	cout << " " << secName << endl;
}
void nameChange(char mas[], char new_mas[]) {
	int size = strlen(mas);
	int size1 = strlen(new_mas);
	int lastIndex = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] == '.') {
			lastIndex = i;
		}
	}
	int i = 0;
	for (lastIndex; lastIndex < size + size1; lastIndex++) {
		mas[lastIndex] = new_mas[i];
		i++;
		if (new_mas[i] == '\0') {
			break;
		}
	}
	cout << mas << endl;
}
void counter(char mas1[], char mas2[], int size, int size1) {
	int count = 0;
	for (int i = 0; i < size - size1 + 1; i++) {
		bool a = true;
		for (int j = 0; j < size1; j++) {
			if (mas1[i + j] != mas2[j]) {
				a = false;
			}
		}
		if (a == true) {
			count++;
		}
	}
	cout << count << endl;
}
int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество букв в слове:" << endl;
	cin >> n;
	char* mas = new char[n];
	cout << "Введите слово: " << endl;
	SetConsoleCP(1251);
	inputarr(mas, n);
	palindrom(mas, n);
	cout << endl;
	delete[] mas;
	int size;
	char arr[100];
	cout << "Введите сумму чисел: ";
	cin >> arr;
	size = strlen(arr);
	sum(arr, size);
	int size1;
	char arr1[100];
	cout << "Введите ФИО: " << endl;
	cin.ignore(32767, '\n');
	cin.getline(arr1, 100);
	size1 = strlen(arr1);
	fio(arr1, size1);
	char arr2[100];
	cout << "Введите название файла: ";
	cin.getline(arr2, 100);
	char arr3[10];
	cout << endl << "Введите новое расширение: ";
	cin.getline(arr3, 10);
	nameChange(arr2, arr3);
	char arr4[300];
	cout << "Введите текст: ";
	cin.getline(arr4, 300);
	int size2 = strlen(arr4);
	char arr5[30];
	cout << endl << "Введите слово, которое нужно подсчитать: ";
	cin.getline(arr5, 30);
	int size3 = strlen(arr5);
	counter(arr4, arr5, size2, size3);
	return 0;
}