/*Q1.A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    float avg = (a + b + c) / 3.0;
    cout << avg;

    return 0;
}   