/*Q19. A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.*/

 
#include <iostream>
 using namespace std;

int main() {
    int n, c = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            c++;

    if(c == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}