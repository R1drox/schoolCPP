#include <iostream>

using namespace std;  

int main() {
  srand(time(0));
  int s[10];
  for(int i = 0; i < 10; i++) {
    s[i] = rand() % 201 - 100;
  }
  cout << "Список чисел: ";
  for (int i = 0; i < 10; i++) {
    if (i == 9) {
      cout << s[i] << ".\n";

    }
    else {
      cout << s[i] << ", ";
    }
  }
  int suma = 0;
  for (int i = 0; i < 10; i++) {
    suma = suma + s[i];
  }
  cout << "Сумма всіх чисел: " << suma << endl;
  int dob = 1;
  for (int i = 0; i < 10; i++) {
    dob = dob * s[i];
  }
  cout << "Добуток всіх чисел: " << dob << endl;
  int suma2 = 0, dob2 = 1;
  int x = 0, y = 0;
  for (int i = 0; i < 10; i++) {
    if (s[i] > 0) {
      suma2 = suma2 + s[i];
      x++;
    }
    else if (s[i] < 0) {
      dob2 = dob2 * s[i];
      y++;
    }
  }
  cout << "Сума додатніх чисел: " << suma2 << endl;
  cout << "Добуток від'ємних чисел: " << dob2 << endl;
  cout << "Кількість додатніх чисел: " << x << endl;
  cout << "Кількість від'ємних чисел: " << y << endl;
  int pa = 0, nepa = 0;
  for (int i = 0; i < 10; i++) {
    if (s[i] % 2 == 0) {
      pa++;
      cout << "Число " << s[i] << " парне" << endl;
    }
    else {
      nepa++;
      cout << "Число " << s[i] << " непарне" << endl;
    }
  }
  cout << "Кількість парних чисел: " << pa << endl;
  cout << "Кількість непарних чисел: " << nepa << endl;
  int min = s[0];
  int max = s[0];
  for (int i = 0; i < 10; i++) {
    if (s[i] < min) {
      min = s[i];
    }
  }
  for (int i = 0; i < 10; i++) {
    if (s[i] > max) {
      max = s[i];
    }
  }
  cout << "Мінімальне число: " << min << endl;
  cout << "Максимальное число: " << max << endl;
}