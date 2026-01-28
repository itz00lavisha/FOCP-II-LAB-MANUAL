/*Q3. A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.*/

#include <iostream>
using namespace std;

int main() {
    float f;
    cin >> f;
    float c = (f - 32) * 5 / 9;
    cout << c;
    return 0;
}