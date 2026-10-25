#include <iostream>
using namespace std;
int main(){
    int s[10];
    srand(time(0));
    for (int i = 0; i < 10; i++){
        s[i] = rand() % 12 + 1;
    }
    cout << "Список оценок: ";
    for (int i = 0; i < 10; i++){
        if (i == 9) {
            cout << s[i] << ".\n";
        }
        else {
            cout << s[i] << ", ";
        }
    }
    int min = s[0];
    for (int i = 0; i < 10; i++){
        if (s[i] < min){
            min = s[i];
        }
    }
    cout << "Минимальная оценка:" << min << endl;
    int max = s[0];
    for (int i = 0; i < 10; i++){
        if (s[i] > max){
            max = s[i];
        }
    }
    cout << "Максимальная оценка: " << max << endl;
    float sum = 0;
    for (int i = 0; i < 10; i++){
        sum = (sum + s[i]);
    }
    cout << "Сумма оценок: " << sum << endl;

    float ser = sum / 10;
    cout << "Средняя оценка: " << ser << endl;
    if (ser < 7) {
        cout << "Ты двоешник" << endl;
    }
    if (ser >= 7 && ser <= 10) {
        cout << "Ты хорошист" << endl;
    }
    if (ser > 10) {
        cout << "Ты отличник" << endl;
    }
    int v;
    cout << "Если хочешь сменить оценки, напиши 1, если нет, то 2: ";
    cin >> v;
    if (v == 1){
        int n;
        cout << "Введите номер оценки которую хотите сменить: ";
        cin >> n;
        while (n < 1 or n > 10) {
            cout << "Введите номер оценки которую хотите изменить: ";
            cin >> n;
        }
        cout << "введите новую оценку: ";
        cin >> s[n - 1];
        while (s[n - 1] < 1 or s[n - 1] > 12) {
            cout << "введите новую оценку: ";
            cin >> s[n - 1];
        }
         cout << "Список оценок: ";
    for (int i = 0; i < 10; i++){
        if (i == 9) {
            cout << s[i] << ".\n";
        }
        else {
            cout << s[i] << ", ";
        }
    }
    int min = s[0];
    for (int i = 0; i < 10; i++){
        if (s[i] < min){
            min = s[i];
        }
    }
    cout << "Минимальная оценка:" << min << endl;
    int max = s[0];
    for (int i = 0; i < 10; i++){
        if (s[i] > max){
            max = s[i];
        }
    }
    cout << "Максимальная оценка: " << max << endl;
    float sum = 0;
    for (int i = 0; i < 10; i++){
        sum = (sum + s[i]);
    }
    cout << "Сумма оценок: " << sum << endl;

    float ser = sum / 10;
    cout << "Средняя оценка: " << ser << endl;
    if (ser < 7) {
        cout << "Ты двоешник" << endl;
    }
    if (ser >= 7 && ser <= 10) {
        cout << "Ты хорошист" << endl;
    }
    if (ser > 10) {
        cout << "Ты отличник" << endl;
    }
    }
}   