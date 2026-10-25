#include <iostream>

using namespace std;

int main() {
    int t, y;

    cout << "Есть ли билет (0/1): ";
    cin >> t;

    cout << "Сколько вам лет: ";
    cin >> y;

    if (t == 1 && y >= 12) {
        cout << "Проходите!";
    }
    else {
        cout << "Проход запрещён!";
    }
}