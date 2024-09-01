//Purpose: input commas between the users number entries and sort them numerically

#include "../../../std_lib_facilities.h"

int main() 
{
    int val1;
    int val2;
    int val3;

    cout << "Enter three numbers: \n";
    cin >> val1 >> val2 >> val3;

    //2 methods to solve this: statically adding commas after each entry
        // cin >> val1 >> ', ' >> val2 >> ', ' >> val3 >> ', \n';
        // while true each time the user inputs a value, add a comma(figure out after learning more)

    
    // Sorting value with comparison using swap 
    // swap takes in 2 arguments and compares them along with comparison operators
    if (val1 > val2) swap(val1, val2);
    if (val1 > val3) swap(val1, val3);
    if (val2 > val3) swap(val2, val3);

    cout << val1 << ", " << val2 << ", " << val3 << '\n';


}