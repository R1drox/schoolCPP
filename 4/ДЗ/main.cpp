#include <iostream>
#include <random>
using namespace std;

int main() {
    srand(time(0));
    int f = rand() % 3 + 1;

    int s = rand() % 3 + 1;

    int t = rand() % 3 + 1;
    
    if (f == s && s == t) {
        cout << "Вы выиграли! Число: " << f << s << t;
    }
    else {
        cout << "Не сегодня :( Число: " << f << s << t;
    }
}