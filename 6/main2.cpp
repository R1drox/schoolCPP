#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введи сколько сантиметров проползает улитка за 1 день: ";
    cin >> a;
    cout << "Введи сколько дней проползает: ";
    cin >> b;
    int sum = 0;
    for (int i = 1; i <= b; i++){
        cout << "За " << i+1 << " день улитка проползла " << a << " см\n";
        sum = sum + a;
        a = a + 2;
    }
    cout << "Улитка за " << b << " дней проползла " << sum << " см\n";
}