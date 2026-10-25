#include <iostream>
using namespace std;

int main(){
    /*
    int - цiле число
    float - дробове число
    double - дробове число подвiйної точностi
    string - текст
    bool - true або false
    char - зберiгає символ
    */
   float a,b;
   char m;
   while(true){
    cout << "Введiть перше число: ";
    cin >> a;
    cout << "Введiть друге число: ";
    cin >> b;
    cout << "Введiть операцiю (+, -, *, /): ";
    cin >> m;
    if (m == '+') {
        cout << "Вiдповiдь: " << a + b << endl;
    }
    else if (m == '-') {
        cout << "Вiдповiдь: " << a - b << endl;
    }
    else if (m == '*') {
        cout << "Вiдповiдь: " << a * b << endl;
    }
    else if (m == '/') {
        if (b == 0){
            cout << "Дiлити на 0 не можна!\n";
            break;
        }
        cout << "Вiдповiдь: " << a / b << endl;
    }
    else if (m == 'e') {
        cout << "Добре, до побачення!";
        return 0;
    }
    else {
        cout << "Такого пункту НЕМАЄ! Оберiть iнше!\n";
    }
   }
   
}    