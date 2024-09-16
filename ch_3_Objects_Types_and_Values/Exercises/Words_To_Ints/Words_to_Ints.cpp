// Purpose of application is to convert spelled-out numbers such as "zero" into integers.
#include "../../../std_lib_facilities.h"

int main(){
    cout << "Enter a number but spell it out:  \n";
    string val1;    
    cin >> val1;    //take in string from user

    int toNum = -1; //Edge case if default value to handle invalid input

    // Mapping spelled-out numbers to actual integers
    if (val1 == "one") toNum = 1;
    else if (val1 == "two") toNum = 2;
    else if (val1 == "three") toNum = 3;
    else if (val1 == "four") toNum = 4;
    else if (val1 == "five") toNum = 5;
    else if (val1 == "six") toNum = 6;
    else if (val1 == "seven") toNum = 7;
    else if (val1 == "eight") toNum = 8;
    else if (val1 == "nine") toNum = 9;
    else if (val1 == "zero") toNum = 0;
    
    if (toNum != -1)
        cout << "Is this the number you've typed? " << toNum << '\n';
    else
        cout << "Invalid input, please enter a spelled-out number between zero and nine." << '\n';

    return 0;
}


/* 
 *  Order of procedures:
 *      prompt the use to enter a number between 1 and 10, but spelled out
 *      take in user input as a string 
 *      create integer variable to use
 *      create if else conditional for strings between one and ten.
 */ 