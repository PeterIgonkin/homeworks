#include <iostream>
#include <ctime>
using namespace std;
void first() {
    int a1, d;
    cout << "Введите значение первого элемента: ";
    cin >> a1;
    cout << "Введите значение разности: ";
    cin >> d;
    const int size = 50;
    int mas[size];
    mas[0] = a1;
    for (int i = 1; i < size; i++) {
        mas[i] = mas[i - 1] + d;
    }
    for (int i = 0; i < size; i++) {
        cout << mas[i] << ' ';
    }
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
    int n = 0;
    cout << "Введите значение количества элементов в массиве: ";
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    shuffle(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void third() {
    const int n = 20;
    int mas[n];
    int r = 0;
    for (int i = 0; i < n; i++) {
        int last;
        mas[i] = rand() % 1000 + 1000;
        last = mas[i] / 10;
        if (last % 2 == 0) {
            r++;
        }
    }
    cout << r;
}
void print_array(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Введите значение № " << i + 1 << endl;
        cin >> mas[i];
        cout << "\n";
    }
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
}
int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    first();
    cout << "\n";
    second();
    cout << "\n";
    third();
    cout << "\n";
    int n;
    cin >> n;
    int *mas = new int[n];
    print_array(mas, n);
    return 0;
}
