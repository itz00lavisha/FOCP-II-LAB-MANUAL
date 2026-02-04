/*Q27. A supermarket software maintains item price lists. Implement a solution to store the prices of 10
items in an array and display the maximum price.*/

#include <iostream>
using namespace std;

int main() {
    int price[10];
    int max;

    cout << "Enter prices of 10 items: \n";
    for(int i = 0; i < 10; i++) 
    {
        cin >> price[i];
    }

    max = price[0];

    for(int i = 1; i < 10; i++) {
        if(price[i] > max)
            max = price[i];
    }

    cout << "Maximum price = " << max;

    return 0;
}