/*Q5. A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques.*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b;
    return 0;
}