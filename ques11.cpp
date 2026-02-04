/*Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly.*/

#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price, total, discount, finalAmount;

    cin >> quantity >> price;

    total = quantity*price;

    if (quantity > 1000)
        discount = total * 0.10;
    else
        discount = 0;

    finalAmount = total - discount;

    cout << finalAmount;
    return 0;
}