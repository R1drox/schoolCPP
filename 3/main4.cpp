#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ukr");
    float v1, v2, s, t;
    cout << "Введіть швидкість 1 авто (км/год): ";
    cin >> v1;
    cout << "Введіть швидкість 2 авто (км/год): ";
    cin >> v2;
    cout << "Введіть початковувідстань (км): ";
    cin >> s;
    cout << "Введіть час у дороці (год): ";
    cin >> t;
    float f = s + ((v1 + v2) * t);
    cout << "Результат: " << f << endl;
}