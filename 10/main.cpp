#include <iostream>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    string nazv[5] = {"еда", "вода", "телефон", "павербанк", "фонарик"};
    float vaga[5] = {3.5, 2, 0.3, 0.6, 0.25};
    cout << "В рюкзаку лежаь такие предметы:\n";
    for (int i = 0; i < 5; i++) {
        cout << nazv[i] << " весит: " << vaga[i] << " кг\n";
    }
    float w;
    cout << "Введите максимальный вес рюкзака: ";
    cin >> w;
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        if (sum + vaga[i] <= w) {
            sum = sum + vaga[i];
            cout << "В рюкзак положили " << nazv[i] << " весом " << vaga[i] << " кг\n"; 
        }
    }  
    float min = vaga[0];
    float max = vaga[0];
    for (int i = 0; i < 5; i++) {
        if (vaga[i] < min) {
            min = vaga[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (vaga[i] > max) {
        max = vaga[i];
    }
  }
    cout << "Весь вес рюкзака: " << sum << " кг\n";
    cout << "Самый большой вес предмета: " << max << " кг\n";
    cout << "Самый маленький вес предмета: " << min  << " кг\n";
}