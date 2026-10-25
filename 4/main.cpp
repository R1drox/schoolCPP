#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int a;
    int s = 7;
    int bot = rand() % 100 + 1;
    cout << "Угадай число от 0 до 100: ";
    cin >> a;
    
    while (a != bot){
        cout << "Осталось попыток: " << s << endl;
        if (a > bot){
            cout << "Меньше\n";
        }
        else if (a < bot){
            cout << "Больше\n";
        }
        cout << "Угадай число от 0 до 100: ";
        cin >> a;
        s--;
        if (a == bot){
            cout << "Вы угадали число" << bot << endl;
            break;
        }
        else if (s == 0){
            cout << "Вы прогирали! Загаданно число: " << bot << endl;
            break;
        }
    }
}
