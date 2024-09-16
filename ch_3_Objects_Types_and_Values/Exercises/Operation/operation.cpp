//Purpose is to take in users operands and output the result. With taking in the operator as a string variable, and integer variable as double
#include "../../../std_lib_facilities.h"

int main(){
    
    double num1;
    double num2;
    string operation;

    cout << "Hello, enter a number that you would like to be calculated: \n";
    cout << "For example, 5 + 3.14, please include a space between each. \n";
    cin >> num1 >> operation >> num2;

    //conditional loop for calculating numbers
    //LATER: Find even better way to simplify this

    if (operation == "+") {
        double sum = num1 + num2;
        cout << num1 << " + " << num2 << " is " << sum << '\n';
    } else if (operation == "-") {
        double diff = num1 - num2;
        cout << num1 << " - " << num2 << " is " << diff << '\n';
    } else if (operation == "*") {
        double mult = num1 * num2;
        cout << num1 << " * " << num2 << " is " << mult << '\n';
    } else if (operation == "/") {
        double div = num1 - num2;
        cout << num1 << " / " << num2 << " is " << div << '\n';
    } else {
        cout << "Whoa, something is wrong here";
    }
    return 0;
}
