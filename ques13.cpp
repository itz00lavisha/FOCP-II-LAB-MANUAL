/*Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation.*/


#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    float d, r1, r2;

    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are: " << r1 << " and " << r2;
    }
    else if (d == 0) {
        r1 = -b / (2.0*a);
        cout << "Roots are equal: " << r1;
    }
    else {
        cout << "No real roots";
    }

    return 0;
}