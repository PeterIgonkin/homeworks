#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число: ";
    cin >> a;
    cout << "Ваше число: " << " ";
    if (a == 0) {
        cout << "ноль\n";
        system("pause");
    }
    if (a < 0) {
        cout << "отрицательное число\n";
        system("pause");
    }
    if (a == 10000000) {
        cout << "десять миллионов\n";
        system("pause");
    }
    switch ((a % 10000000) / 1000000)
    {
    case 1: cout << "один миллион "; break;
    case 2: cout << "два миллиона "; break;
    case 3: cout << "три миллиона "; break;
    case 4: cout << "четыре миллиона "; break;
    case 5: cout << "пять миллионов "; break;
    case 6: cout << "шесть миллионов "; break;
    case 7: cout << "семь миллионов "; break;
    case 8: cout << "восемь миллионов "; break;
    case 9: cout << "девять миллионов "; break;
    case 10: cout << "десять миллионов "; break;
    }
    if ((a % 100000) / 10000 == 0) {
        switch ((a % 1000000) / 100000)
        {
        case 1: cout << "сто тысяч "; break;
        case 2: cout << "двести тысяч "; break;
        case 3: cout << "триста тысяч "; break;
        case 4: cout << "четыреста тысяч "; break;
        case 5: cout << "пятьсот тысяч "; break;
        case 6: cout << "шестьсот тысяч "; break;
        case 7: cout << "семьсот тысяч "; break;
        case 8: cout << "восемьсот тысяч "; break;
        case 9: cout << "девятьсот тысяч "; break;
        }
    }
    else {
        switch ((a % 1000000) / 100000)
        {
        case 1: cout << "сто "; break;
        case 2: cout << "двести "; break;
        case 3: cout << "триста "; break;
        case 4: cout << "четыреста "; break;
        case 5: cout << "пятьсот "; break;
        case 6: cout << "шестьсот "; break;
        case 7: cout << "семьсот "; break;
        case 8: cout << "восемьсот "; break;
        case 9: cout << "девятьсот "; break;
        }
        if ((a%10000) / 1000 == 0){
        switch ((a % 100000) / 10000) {
        case 1: cout << "десять тысяч "; break;
        case 2: cout << "двадцать тысяч "; break;
        case 3: cout << "тридцать тысяч "; break;
        case 4: cout << "сорок тысяч "; break;
        case 5: cout << "пятьдесят тысяч "; break;
        case 6: cout << "шестьдесят тысяч "; break;
        case 7: cout << "семьдесят тысяч "; break;
        case 8: cout << "восемьдесят тысяч "; break;
        case 9: cout << "девяносто тысяч "; break;
        }
        }
        else {
            switch ((a % 100000) / 10000) {
            case 1: cout << "десять "; break;
            case 2: cout << "двадцать "; break;
            case 3: cout << "тридцать "; break;
            case 4: cout << "сорок "; break;
            case 5: cout << "пятьдесят "; break;
            case 6: cout << "шестьдесят "; break;
            case 7: cout << "семьдесят "; break;
            case 8: cout << "восемьдесят "; break;
            case 9: cout << "девяносто "; break;
            }
            switch ((a % 10000) / 1000) {
            case 1: cout << "одна тысяча "; break;
            case 2: cout << "две тысячи "; break;
            case 3: cout << "три тысячи "; break;
            case 4: cout << "четыре тысячи "; break;
            case 5: cout << "пять тысяч "; break;
            case 6: cout << "шесть тысяч "; break;
            case 7: cout << "семь тысяч "; break;
            case 8: cout << "восемь тысяч "; break;
            case 9: cout << "девять тысяч "; break;
            
            }
        }
    }
    switch ((a % 1000) / 100) {
    case 1: cout << "сто "; break;
    case 2: cout << "двести "; break;
    case 3: cout << "триста "; break;
    case 4: cout << "четыреста "; break;
    case 5: cout << "пятьсот "; break;
    case 6: cout << "шестьсот "; break;
    case 7: cout << "семьсот "; break;
    case 8: cout << "восемьсот "; break;
    case 9: cout << "девятьсот "; break;
    }
    if ((a % 100) >= 20) {
        switch ((a % 100) / 10) {
        case 2: cout << "двадцать "; break;
        case 3: cout << "тридцать "; break;
        case 4: cout << "сорок "; break;
        case 5: cout << "пятьдесят "; break;
        case 6: cout << "шестьдесят "; break;
        case 7: cout << "семьдесят "; break;
        case 8: cout << "восемьдесят "; break;
        case 9: cout << "девяносто "; break;
        }
    }
    if ((a % 100 >= 10) & (a % 100 < 20)) {
        switch (a % 100) {
        case 10: cout << "десять"; break;
        case 11: cout << "одинадцать"; break;
        case 12: cout << "двенадцать"; break;
        case 13: cout << "тринадцать"; break;
        case 14: cout << "четырнадцать"; break;
        case 15: cout << "пятнадцать"; break;
        case 16: cout << "шестнадцать"; break;
        case 17: cout << "семнадцать"; break;
        case 18: cout << "восемнадцать"; break;
        case 19: cout << "девятнадцать"; break;
        }
    }
    if ((a % 100) / 10 == 0){
        switch ((a%10) / 1) {
        case 1: cout << "один "; break;
        case 2: cout << "два "; break;
        case 3: cout << "три "; break;
        case 4: cout << "четыре "; break;
        case 5: cout << "пять "; break;
        case 6: cout << "шесть "; break;
        case 7: cout << "семь "; break;
        case 8: cout << "восемь "; break;
        case 9: cout << "девять "; break;
        }
    }
    cout << "\n";
    system("pause");

    return 0;
}