#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int a;
    int sum = 0;
    cout << "Введите сколько инностранных слов Юля выучила за 1 неледю каникул: ";
    cin >> a;
    for (int i = 1; i <= 7; i++) {
        cout << "За " << i << " дней Юля выучила " << a << " слов\n";
        sum = sum + a;
        a = a + 3;
    }
    cout << "Юля выучила " << sum << " инностранных слов за 1 неделю." << endl;
    for (int i = 7; i >= 1; i--) {
        a = a - 3;
        cout << "За " << i << " дней Юля выучила " << a << " слов\n";
    }
}