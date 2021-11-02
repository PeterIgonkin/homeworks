#include <iostream>
#include <ctime>
using namespace std;
void print_array(int arr[], int size);
void first();
void shuffle(int a[], int len);
void second();
void third();
int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    first();
    cout << "\n";
    second();
    cout << "\n";
    third();
    return 0;
}
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
void first() {
    int a1, d;
    cout << "Введите значение первого элемента: ";
    cin >> a1;
    cout << "Введите значение разности: ";
    cin >> d;
    int size = 50;
    int *mas = new int[size];
    mas[0] = a1;
    for (int i = 1; i < size; i++) {
        mas[i] = mas[i - 1] + d;
    }
    print_array(mas, size);
    delete[] mas;
}
void shuffle(int a[], int len) {
    int temp = 0;
    int randomIndex = 0;
    for (int i = 0; i < len; i++) {
        randomIndex = rand() % len;
        temp = a[i];
        a[i] = a[randomIndex];
        a[randomIndex] = temp;
    }
}
void second() {
    int n;
    cout << "Введите значение количества элементов в массиве: ";
    cin >> n;
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
        b[i] = i + 1;
    }
    shuffle(b, n);
    print_array(b, n);
    delete[] b;
}
void third() {
    int n = 20;
    int *mas = new int[n];
    int r = 0;
    for (int i = 0; i < n; i++) {
        int last;
        mas[i] = rand() % 1001 + 1000;
        last = mas[i] / 10;
        if (last % 2 == 0) {
            r++;
        }
    }
    delete[] mas;
    cout << r;
}