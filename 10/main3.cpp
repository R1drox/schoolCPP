#include <iostream>
using namespace std;

int main() {
    int t = 100;
    int x = 0;
    int c = 0;
    cout << "Введите сколько заряда уходит за 1 час: ";
    cin >> x;
    while (t != 0) {
        cout << "На телефоне " << t << " заряда\n";
        t = t - x;
        c++;
        cout << "Ушло " << c << " часа\n";
        if (t <= 0) {
            return 0;
        }
    }
}