  /*Q2. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle.*/
#include <iostream>
using namespace std;

int main() {
    float R ;
    cin >> R;
//area=A,radius=R, the formula is area is pie into square of radius
    float A = 3.14 * R * R;
    cout << A;
//output of area
    return 0;
}