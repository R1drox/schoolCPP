#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите любое число: ";
    cin >> a;
    for (int i = 0; i < 10; i++) {
        cout << a << "*" << i << "=" << a * i << endl;
    }
}