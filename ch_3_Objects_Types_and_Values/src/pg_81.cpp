// The purpopse of this application is to show type conversions
#include "../../std_lib_facilities.h"

int main()
{
    double d = 0;
    while (cin>>d) {
        
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d;
        cout << "i==" << i;
        cout << "i2==" << i2;
        cout << "char(" << c << ")\n";
    }

    return 0;
}