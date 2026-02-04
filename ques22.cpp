/*Q22. A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a
hollow diamond pattern of .*/

 #include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int s = i; s < n; s++)
            cout << " ";
        cout << "*";
        if(i > 1)
            cout << " " << "*";
        cout << endl;
    }

    for(int i = n - 1; i >= 1; i--) {
        for(int s = i; s < n; s++)
            cout << " ";
        cout << "*";
        if(i > 1)
            cout << " " << "*";
        cout << endl;
    }

    return 0;
}


