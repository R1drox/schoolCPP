#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Введите пятизначное число: ";
    cin >> a;
    while (a < 10000 or a > 99999) {
        cout << "Введёное число не 5-значное! Попробуйсте снова: ";
        cin >> a;
    }
    int b = a / 10000;
    cout <<"Первое число: " << b << endl;
    int c = a % 10000 / 1000;
    cout <<"Второе число: " << c << endl;
    int d = a % 1000 / 100;
    cout <<"Третее число: " << d << endl;
    int e = a % 100 / 10;
    cout <<"Четвёртое число: " << e << endl;
    int f = a % 10 / 1;
    cout <<"Пятое число: " << f << endl;

}