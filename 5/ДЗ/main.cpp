#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    string b;
    cout << "Сколько у тебя дел: \n";
    cin >> a;

    while (a > 0){
        cout << "Какое задание ты выполнил: \n";
        getline(cin, b);
        a--;
        if (a == 0){
            cout << "Ты выполнил все задания!\n";
        }
    }
}   