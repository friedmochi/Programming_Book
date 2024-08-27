#include "../../std_lib_facilities.h"

// Focus: User input and output
//
//       string variable;                                    Declaration: Variable telling compiler "hey I'm here, use me!" (Value not yes assigned)
//       string variable = " " or string varaible(" ");      Initialization: Declaration and assigning a value(specific to data type). Value can also be assigned with constructors().
//       string variable;                                    Assignment:
//       variable = " ";
int main()
{

    cout << "Enter the name of the person you want to write to \n";
    string first_name;                      // string declration of a variable (tellling the compiler that the variable exists and what type it is)
    cin >> first_name;                      // read a string
    cout << "Dear, " << first_name << '\n'; // store users input within memory, and recalls it here

    // Need to revisit this section, string is only taking in 1 word and continuing the program
    // If the user enters words, the program is skipped to the end
    cout << "How are you doing today?\n";
    string checking_in;
    cin >> checking_in;
    getline (cin, checking_in);                             //getline is not included in the std_lib_facilities header. 
    cout << "Well, I hope things work out for you.\n";

    cout << "Oh gosh, you mentioned that friend of yours...their name was...? \n";
    string friend_name;
    cin >> friend_name;
    cout << "Is that a males(m) or females(f) name?\n";
    char friend_sex = 0;
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    else
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    
    //5. Prompt the user to enter that age of the recipient and assign it to an int variable age. 
    //   Have your program write " I hear you just had a birthday and you are age years old." If age is 0 or less or 110 or more, call simple_error("error kidding!") 
    //   using simple_error() from std_lib_facilities.h.
    
    cout << "How old is " << friend_name << "?\n";                                     
    int friend_age;
    cin >> friend_age;
    cout << "Ok, I heard " << friend_name << " just turned " << friend_age << '\n';
 

    if (friend_age <= 0 || friend_age >= 110){          // checks if age is 0 OR less OR 110 OR more using conditional operator(<=) and logical operator(OR)
        simple_error("you're kidding");                 // calls simple error function already declared in header file
    }

    //6. Add this to your letter:
    //      If your friend is under 12, write "Next year you will be age+1."
    //      If your friend is 17, write "Next year you will be able to vote."
    //      If your frined is over 70, write " I hope you are enjoying retirement."

    if (friend_age < 12)
    {
        cout << "Next year " << friend_name << "will be " << friend_age+1 << '\n';
    } 
    else if (friend_age == 17)
    {
        cout << "Next year " << friend_name << " will be able to vote\n";
    } 
    else if (friend_age >= 70)
    {
        cout << "Dang, " << friend_name << "'s hella old. Enjoy retirement.\n";
    }
    
    //7. Add "Yours sincerely," followed by two blank tlines for a signature, followed by your name.

    cout << "Much Aloha, \n \n \n" << first_name << '\n';

    keep_window_open();

    return 0;
}