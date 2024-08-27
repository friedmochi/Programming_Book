// Purpose of the program is to convert miles to kilometers

#include "../../../std_lib_facilities.h"

int main() 
{
    cout << "Enter a number you'd like to convert to kilometers: ";
    int to_convert;
    cin >> to_convert;

    double to_kilometers = to_convert * 1.609;

    cout << to_convert << " miles is " << to_kilometers << " kilometers\n";
}