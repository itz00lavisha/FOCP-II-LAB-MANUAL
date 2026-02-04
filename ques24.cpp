/* 
Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
A
AB
ABC
ABCD
ABCDE
*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    for(char i = 'A'; i <= 'E'; i++) {
        for(ch = 'A'; ch <= i; ch++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}