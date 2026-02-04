/*Q18. A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome.*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string id, rev = "";

    cout << "Enter ID: ";
    cin >> id;

    for(int i = id.length() - 1; i >= 0; i--) {
        rev += id[i];
    }

    if(id == rev)
        cout << "ID is a Palindrome";
    else
        cout << "ID is Not a Palindrome";

    return 0;
}