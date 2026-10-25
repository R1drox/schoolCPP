#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    int a;
    cout << "Введiть колiр веселки по № вiд 1 до 7: ";
    cin >> a;
    switch (a){
        case 1:  cout << "Червоний" << endl;   break;
        case 2:  cout << "Помаранчевий" << endl;    break;
        case 3:  cout << "Жовтий" << endl; break;
        case 4:  cout << "Зелений" << endl;  break;
        case 5:  cout << "Блакитный" << endl;  break;
        case 6:  cout << "Синій" << endl;  break;
        case 7:  cout << "Фіолетовый" << endl;   break;
        default: cout << "Неправильний колiр веселки!" << endl; break;
    }
}