/*Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of each operation*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n 1.Addition";
        cout << "\n 2.Subtraction";
        cout << "\n 3.Multiplication";
        cout << "\n 4.Division";
        cout << "\n 5.Exit";
        cout << "\n Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << a + b;
                break;
            case 2:
                cout << "Result = " << a - b;
                break;
            case 3:
                cout << "Result = " << a * b;
                break;
            case 4:
                if (b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division not possible";
                break;
            case 5:
                cout << "Calculator Closed";
                break;
            default:
                cout << "Invalid Choice";
        }
    } while (choice != 5);

    return 0;
}
 