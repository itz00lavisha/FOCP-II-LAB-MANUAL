/*Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol.*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9') 
      {
        cout << "Number";
      }
    else if (ch == 'a' || ch == 'e' || ch == 'i' ||
             ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' ||
             ch == 'O' || ch == 'U')
      {
        cout << "Vowel";
      }
    else 
      {
        cout << "Consonant";
      }

    return 0;
}