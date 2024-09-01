//Programs function is to take the users input and determine if the value is odd or even

#include "../../../std_lib_facilities.h"

int main()
{
    int val1;

    cout << "Hello, please enter a number: ";
    cin >> val1;

    // comparison to check if value is divisible by 2, then the number is even, if not, it is odd.
    if (val1 % 2 == 0)
    {
        cout << "The value " << val1 << " is an even number \n";
    } else {
        cout << "The value " << val1 << " is an odd number \n";
    }
    return 0;
}

//Lesson learned is the use of the modulous(%) operator. 
/* git init (initialize repo)
 * git add . (add files to staging area)
 * git commit -m (commit staged files with comment)
 * git push -u origin develop (push staged files to remote repo with specific branch)
 *  git remote -v (view what repo you are on)
 *  git branch (view the current branch you are on)
 *  -u : option sets the upstream tracking information, thus no need to add repo or branch "git push" and done.
*/