#include <iostream>
using namespace std;

int main(){
    float s, d;
    cout << "Введи ширину прямоугольника: " ;
    cin >> s;
    cout << "Введи длину прямоугольника:";
    cin >> d;
    cout << "Площадь: " << s * d << endl;
    cout << "Периметр: " << 2 * (s + d) << endl;
}