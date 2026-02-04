/*Q16. A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a
number and check whether it is prime.*/


#include <iostream>
using namespace std;

int main() 
{
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}