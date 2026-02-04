/*Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 */

#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int column = 5;

    for(int i = 1; i <= rows; i++)
     {       
        for(int j = 1; j <= column; j++)
         {   
            cout << j << " ";
        }
        cout << endl;   
    }

    return 0;
}
