#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int k1[5], k2[5];
    for (int i = 0; i < 5; i++){
        k1[i] = rand() % 36 + 175;
        k2[i] = rand() % 36 + 175;
    }
    cout << "Рост игроков первой команды: ";
    for (int i = 0; i < 5; i++){
        if (i == 4) {
            cout << k1[i] << " см." << endl;
        }
        else {
            cout << k1[i] << " см, ";
        }
    }
    cout << "Рост второй команды: ";
    for (int i = 0; i < 5; i++){
        if (i == 4) {
            cout << k2[i] << " см." << endl;
        }
        else {
            cout << k2[i] << " см, ";
        }
    }
    cout << "----------------------------------------" << endl;
    int min1 = k1[0];
    for (int i = 0; i < 5; i++) {
        if (k1[i] < min1) {
            min1 = k1[i];
        }
    }
    cout << "Самый маленький игрок в команде 1: " << min1 << " см\n";
     int min2 = k2[0];
    for (int i = 0; i < 5; i++) {
        if (k2[i] < min2) {
            min2 = k2[i];
        }
    }
    cout << "Самый маленький игрок в команде 2: " << min2 << " см\n";

    int max1 = k1[0];
    for (int i = 0; i < 5; i++) {
        if (k1[i] > max1) {
            max1 = k1[i];
        }
    }
    cout << "----------------------------------------" << endl;
    cout << "Самый высокий игрок в команде 1: " << max1 << " см\n";
    int max2 = k2[0];
    for (int i = 0; i < 5; i++) {
        if (k2[i] > max2) {
            max2 = k2[i];
        }
    }
    cout << "Самый высокий игрок в команде 2: " << max2 << " см\n";
    cout << "----------------------------------------" << endl;
    if (min1 > min2) {
        cout << "Самый маленький игрок в команде 2 (" << min2 << ")" << endl;
    }
    else if (min1 < min2) {
        cout << "Самый маленький игрок в команде 1 (" << min1 << ")" << endl;
    }
    else {
        cout << "Самый маленький рост из 2 команд сразу " << min1 << endl;
    }

    if (max1 < max2) {
        cout << "Самый высокий игрок в команде 2 (" << max2 << ")" << endl;
    }
    else if (max1 > max2) {
        cout << "Самый высокий игрок в команде 1 (" << max1 << ")" << endl;
    }
    else {
        cout << "Самый высокий рост из 2 команд сразу " << max1 << endl;
    }

}