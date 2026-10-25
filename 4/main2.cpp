#include <iostream>
#include <random>
using namespace std;

int main(){
    srand(time(0));
    int bot = rand()%21-10;
    if (bot >= 4){
        cout << "Число: " << bot << " Умножить в 2 раза" << endl;
        cout << bot * 2 << endl;
    }
    if (bot < 0 or (bot >= 1 && bot <= 3)){
        cout << "Число: " << bot << " Отнять от него 55" << endl;
        cout << bot - 55 << endl;
    }
}