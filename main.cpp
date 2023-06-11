#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
  srand(time(NULL));
  
  double* arr = new double[10];
  for (int i = 0; i <= 10; i++) {
      arr[i] = (rand() / (double)RAND_MAX) * 4 - 2;// RAND_MAX використовується для нормалізації значень
    }

 int pos_count = 0; 
  int neg_count = 0;
  for (int i = 0; i <= 10; i++) {
      if (arr[i] > 0) {
          pos_count++;
      } else if (arr[i] < 0) {
          neg_count++;
      }
    }

  cout << "Масив:\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nКількість додатних чисел: " << pos_count << endl;
    cout << "Кількість від'ємних чисел: " << neg_count << endl;

    delete[] arr; 
    return 0;
  }
