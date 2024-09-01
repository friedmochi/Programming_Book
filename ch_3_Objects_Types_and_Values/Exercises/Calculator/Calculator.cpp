// Determine the smaller, larger, sum, difference, product, and ratio of the values
// Hotkeys:
//   Delete the line: Cmd + Shift + K
//   Copy Line Up/Down: Opt + Shift + ↓ / ↑

#include "../../../std_lib_facilities.h"

int main() 
{

    double val1;
    double val2;

    cout << "Enter two decimal point number with a space in-between: ";
    cin >> val1 >> val2;

    // min/max operations between two whole number values
    double smaller = min(val1, val2);
    double larger = max(val1, val2);
    double difference = abs(val1 - val2); // abs = absolute value. If use enters a val1 as a smaller number to val2, abs converts it to non-negative
    double product = val1 * val2;
     // Type cast from int to double to ensure floating-point division
    double ratio = static_cast<double>(val1) / static_cast<double>(val2);

    cout << "The smaller of the two values is " << smaller << '\n';
    cout << "The larger of the two values is " << larger << '\n';
    cout << "The difference of the two values is " << difference << '\n';
    cout << "The product of the two values is " << product << '\n';
    cout << "The double of the two values is " << setprecision(2) << ratio << '\n';



}