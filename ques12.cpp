/*Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout <<"Equilateral Triangle";
    else if (a == b || b == c || a == c)
        cout <<"Isosceles Triangle";
    else
        cout <<"Scalene Triangle";

    return 0;
}