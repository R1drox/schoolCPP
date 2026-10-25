#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int bot = rand() % 20 + 1;
    int a;
    while (bot > 0){
        cout << "У дракона " << bot << " голов" << endl;
        cout << "Сколько голов хотите отрубить (1-3): ";
        cin >> a;
        while (a < 1 or a > 3){
            cout << "Неправильно, введите от 1 до 3:";
            cin >> a;
        }
        if (bot - a >= 0){
            bot = bot - a;
            cout << "Вы отрубили " << a << " голов дракону\n";
            if (bot == 20 or bot == 16 or bot == 12 or bot == 8 or bot == 4) {
                cout << "У дракона выросла новая голова\n";
                bot++;
            }
        }
        else {
            cout << "вы не можете отрубать больше голов чем у дракона" << endl;
        }
    }
    cout << "Вы выиграли дракона!" << endl;
}