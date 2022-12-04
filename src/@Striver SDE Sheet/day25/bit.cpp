#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 6;

    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) << endl;
    cout << "~a: " << ~a << endl;
    cout << "a^b: " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (21 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;

    cout << (++i) << endl; // print 8 and i = 8
    cout << (i++) << endl; // print 8 and i = 9
    cout << (i--) << endl; // print 9 and i = 8
    cout << (--i) << endl; // print 7 and i = 7
    cout << i << endl;     // print 7

    return 0;
}
