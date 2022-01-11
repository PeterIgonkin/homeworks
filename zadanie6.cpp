#include <iostream>
#include <ctime>
using namespace std;
void fill_array(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 100;
		}
	}
}
void print_array(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		} cout << endl;
	}
}
void delete_array(int** mas, int n) {
	for (int i = 0; i < n; i++) delete[] mas[i];
	delete[] mas;
}
void raw_delete(int** mas, int n, int m) {
	int max_el = 0;
	int i_raw;
	int j_raw;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > max_el) {
				max_el = mas[i][j];
				i_raw = i;
				j_raw = j;
			}
		}
	}
	int** mas_new = new int* [n - 1];
	for (int i = 0; i < n-1; i++) mas_new[i] = new int[m - 1];
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			mas_new[i][j] = mas[i + (i >= i_raw)][j + (j >= j_raw)];
		}
	}
	cout << "Массив до удаления строки и столбца:" << endl;
	print_array(mas, n, m);
	cout << "Массив после удаления строки и столбца:" << endl;
	print_array(mas_new, n - 1, m - 1);
}
void multiply_matrix(int **mas1, int **mas2, int n1, int m1, int n2, int m2 ) {
	if (m1 != n2) {
		cout << "Перемножение матриц невозможно" << endl;
		return;
	}
	else {
		int** res = new int* [n1];
		for (int i = 0; i < n1; i++) res[i] = new int[m2];
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < m2; j++) {
				res[i][j] = 0;
				for (int k = 0; k < m1; k++) {
					res[i][j] += mas1[i][k] * mas2[k][j];
				}
			}
		}
		cout << "Первая матрица:" << endl;
		print_array(mas1, n1, m1);
		cout << "Вторая матрица:" << endl;
		print_array(mas2, n2, m2);
		cout << "Результат перемножения:" << endl;
		print_array(res, n1, m2);
	}
}
void matrix_swap(int** mas, int n) {
	cout << "Матрица до изменения:" << endl;
	print_array(mas, n, n);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			swap(mas[i][j], mas[n - j - 1][n - i - 1]);
		}
	}
	cout << "Матрица после изменения:" << endl;
	print_array(mas, n, n);
}
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n;
	int m;
	cout << "Введите кол-во строк: ";
	cin >> n;
	cout << endl << "Введите кол-во столбцов: ";
	cin >> m;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) mas[i] = new int[m];
	fill_array(mas, n, m);
	raw_delete(mas, n, m);
	delete_array(mas, n);
	int n1, m1, n2, m2;
	cout << "Введите кол-во строк и столбцов первой матрицы: ";
	cin >> n1 >> m1;
	cout << "Введите кол-во строк и столбцов второй матрицы: ";
	cin >> n2 >> m2;
	int** mas1 = new int* [n1];
	for (int i = 0; i < n; i++) mas1[i] = new int[m1];
	int** mas2 = new int* [n2];
	for (int i = 0; i < n2; i++) mas2[i] = new int[m2];
	fill_array(mas1, n1, m1);
	fill_array(mas2, n2, m2);
	multiply_matrix(mas1, mas2, n1, m1, n2, m2);
	delete_array(mas1, n1);
	delete_array(mas2, n2);
	int size;
	cout << "Введите размерность матрицы: ";
	cin >> size;
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) matrix[i] = new int[size];
	fill_array(matrix, size, size);
	matrix_swap(matrix, size);
	delete_array(matrix, size);
	return 0;
}