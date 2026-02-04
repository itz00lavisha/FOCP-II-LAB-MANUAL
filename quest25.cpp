/* Q25. A security system generates list of prime keys within given range. Implement a solution to display all
prime numbers between two limits.
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application*/



/*PART-1(Print Prime Numbers Between Two Limits)*/
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "The Prime numbers are: ";

    for (int i = start; i <= end; i++) {
        int count = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            cout << i << " ";
    }

    return 0;
}



/*PART-2(Password Validation)*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    int upper = 0, lower = 0, digit = 0, special = 0;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
        else if (password[i] == '@' || password[i] == '#' ||
                 password[i] == '$' || password[i] == '%' ||
                 password[i] == '!' || password[i] == '&' ||
                 password[i] == '*')
            special = 1;
    }

    if (upper && lower && digit && special)
        cout << "Password is VALID";
    else
        cout << "Password is INVALID";

    return 0;
}
