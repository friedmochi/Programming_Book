//program to detect repeated words

#include "../../std_lib_facilities.h"

int main() 
{
    cout << "Enter a sentence: ";
    string previous = " ";                                  // previous word initialized to "waiting for a word"
    string current;                                         // current word
    while (cin >> current) {                                // read the stream of words
        if (previous == current)                            // check if the previous words are repeated
            cout << "repeated word:" << current << '\n';
            previous = current;
    }
    return 0;

}