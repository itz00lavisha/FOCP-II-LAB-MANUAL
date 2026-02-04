/*Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
and identify the winner.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
//simple c program code 
    if (a > b && a > c)
        cout << "Player 1 Wins";
    else if (b > a && b > c)
        cout << "Player 2 Wins";
    else if (c > a && c > b)
        cout << "Player 3 Wins";
    else
        cout << "Match Draw";

    return 0;
}