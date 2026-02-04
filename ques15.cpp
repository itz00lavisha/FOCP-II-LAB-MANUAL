/*Q15. A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/

#include <iostream>
using namespace std;

int main() 
{
    int n, num, max;
    cout << "Enter no. of entries: ";
    cin >> n;

    cout << "Enter the sales figures:\n";
    cin >> max;  

    for(int i = 1; i < n; i++)
     {
        cin >> num;
        if(num > max)
         {
            max = num;
        }
     }

    cout << "Maximum sales figure = " << max;

    return 0;
}
