#include <iostream>
using namespace std;

int main(){
    int cars = 0;
    int gived;
    int boxes;
    cout << "Оберiть кiлькiсть ящикiв якi будуть на складi: ";
    cin >> boxes;
    if (boxes <= 0){
        cout << "Не може бути ящикiв меньше 1!!!";
        return 0;
    }
    while (boxes >= 0){
        cout << "Привiт, скiльки менi потрiбно забрати ящикiв: ";
        cin >> gived;
        if (gived > boxes){
            cout << "Немає стiльки ящикiв!" << endl;
            return 0;
        }
        boxes -= gived;
        cars += 1;
        cout << "На складi " << boxes << " ящикiв" << endl;
        if (boxes == 0){
            cout << "Бiльше нема ящикiв" << endl;
            cout << "Машин було: " << cars << endl;
            return 0;
        }
    }
}