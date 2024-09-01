//Purpose: input commas between the users number entries and sort them alphabetically
//Swap can be used for strings AND integers

#include "../../../std_lib_facilities.h"

int main() 
{
    string val1;
    string val2;
    string val3;

    cout << "Enter three words with spaces inbetween: \n";
    cin >> val1 >> val2 >> val3;

    cout << "Before comparison and swap: " << val1 << ", " << val2 << ", " << val3 << '\n'; 

    // Sorting value with comparison using swap 
    // swap takes in 2 arguments and compares them along with comparison operators
    if (val1 > val2) swap(val1, val2);
    if (val1 > val3) swap(val1, val3);
    if (val2 > val3) swap(val2, val3);

    cout << val1 << ", " << val2 << ", " << val3 << '\n';


}