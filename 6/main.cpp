#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int user;
    int orel = 0, re = 0;
    for (int c = 1; c <= 9; c++){
        cout << "Кидок номер " << c << " монетки\n";
        int coin = rand() % 2 + 1;
        if (coin == 1) {
            cout << "Выпал Орел\n";
            orel++;
        }
        else{
            cout << "Выпала Решка\n";
            re++;
        }
    cout << "------------------------" << endl;
    cout << "Орлов: " << orel << endl;
    cout << "Решек: " << re << endl;
    cout << "------------------------" << endl;
    if (orel > re) {
        cout << "Ответ: да\n";
    }
    else { 
        cout << "Ответ: нет\n";
    }
    }
}