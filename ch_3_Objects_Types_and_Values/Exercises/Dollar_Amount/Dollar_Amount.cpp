//Collect the monetary amount from coins and convert to dollar amount
// 09/16 : For future development, better simplify this solution. It seems to be repetitive. But for a begineer, its ok...you're learning.

#include "../../../std_lib_facilities.h"

int main() {

    int penny;
    int nickel;
    int dime;
    int quarter;
    int dollar = 1.00;
    // fixed = fixed point notation, not scientific (scientific 1234e+02, fixed 123456)
    // setprecision() = output a set amount on decimal places to view
    cout << fixed << setprecision(2); //for this application only, the dollar amount will display the 2 decimal places. Set globally

    //Loop that initializes only once. Prompting: Penny, nickel, dimes, and quarters.
    for (int i = 0; i <= 0; i++){

        cout << "How many pennies do you have? ";
        cin >> penny;
        if (penny >= 100) {
            cout << "You have $" << penny * 0.01 / dollar << '\n'; 
        } else {
            cout << "You have " << penny * 0.01 << " cents \n";
        }

        cout << "How many nickels do you have? ";
        cin >> nickel;
         if (nickel >= 20) {
            cout << "You have $" << nickel * 0.05 / dollar << '\n'; 
        } else {
            cout << "You have " << nickel * 0.05 << " cents \n";
        }

        cout << "How many dimes do you have? ";
        cin >> dime;
         if (dime >= 10) {
            cout << "You have $" << dime * 0.10 / dollar << '\n'; 
        } else {
            cout << "You have " << dime * 0.10 << " cents \n";
        }

        cout << "How many quarters do you have? ";
        cin >> quarter;
         if (quarter >= 4) {
            cout << "You have $" << quarter * 0.25 / dollar << '\n'; 
        } else {
            cout << "You have " << quarter * 0.25 << "  \n";
        }
    }
    cout << "--------------------- \n";
    cout << "You have " << penny << " pennies or $" << penny * 0.01 << " cents \n"; 
    cout << "You have " << nickel << " nickels or $" << nickel * 0.05 << " cents \n"; 
    cout << "You have " << dime << " dimes or $" << dime * 0.10 << " cents \n"; 
    cout << "You have " << quarter << " quarters or $" << quarter * 0.25 << " cents \n"; 

    //cout << "Hello, I see you have a bunch of coins. Lets add them up!\n";
    //cout << "How many pennies do you have? ";
    //cin >> penny;
    //cout << "You have " << penny << " pennies or " << penny * 0.01 << " cents \n";

   // cout << "How many nickels do you have? ";
    //cin >> nickel;

    //cout << "How many dimes do you have? ";
    //cin >> dime;

    //cout << "How many quarters do you have? ";
    //cin >> quarter;


    //cout << "Well, it looks like have " << total <<  
}

//Lesson learned is the use of the modulous(%) operator. 
/* git init (initialize repo)
 * git add . (add files to staging area)
 * git commit -m "Message" (commit staged files with comment)
 * git push -u origin develop (push staged files to remote repo with specific branch)
 *  git remote -v (view what repo you are on)
 *  git branch (view the current branch you are on)
 *  -u : option sets the upstream tracking information, thus no need to add repo or branch "git push" and done.
*/