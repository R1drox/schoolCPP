#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Введите шестизначное число: ";
    cin >> a;
    while (a < 100000 or a > 999999) {
        cout << "Введёное число не 5-значное! Попробуйсте снова: ";
        cin >> a;
    }
    int x = a / 100000;
    cout <<"Первое число: " << x << endl;
    int b = a % 100000 / 10000;
    cout <<"Второе число: " << b << endl;
    int c = a % 10000 / 1000;
    cout <<"Третее число: " << c << endl;
    int d = a % 1000 / 100;
    cout <<"Четвёртое число: " << d << endl;
    int e = a % 100 / 10;
    cout <<"Пятое число: " << e << endl;
    int f = a % 10 / 1;
    cout <<"Шестое число: " << f << endl;
    cout << "Сумма 6 чисел: " << x + b + c + d + e + f << endl;
}