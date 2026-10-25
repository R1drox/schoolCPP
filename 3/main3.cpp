#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Введите 4-значное число: ";
    cin >> a;
    int c = a % 10000 / 1000;
    int d = a % 1000 / 100;
    int e = a % 100 / 10;
    int f = a % 10 / 1;
    cout << d << c << f << e << endl;
}