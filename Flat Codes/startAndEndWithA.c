#include <iostream>
#include <time.h>
using namespace std;
int main() {
   // for generating random numbers
   srand(time(0));
   int max = 1 + rand() % 15;
   int i = 0;
   while (i < max) {
      char data = 'a' + rand() % 2;
      cout << data << " ";
      i++;
      if (data == 'a') {
         if (i == max)
            cout << "YES\n";
         while (i < max) {
            data = 'a' + rand() % 2;
            cout << data << " ";
            i++;
            if (data == 'a' && i == max) {
               cout << "\nYES\n";
            } else if (i == max) {
               cout << "\nNO\n";
            }
         }
      } else {
         while (i < max) {
            data = 'a' + rand() % 2;
            cout << data << " ";
            i++;
         }
         cout << "\nNO\n";
      }
   }
   return 0;
}
