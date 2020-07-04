// 1imits.cpp-- some integer limits
#include <iostream>
//use limits.h for older systems
#include <climits>

using namespace std;
int main()
{
    // initialize n_int to max int value
    int n_int = INT_MAX;
    // symbols defined in c1imits file
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    unsigned int u_int = UINT_MAX;
    unsigned long u_long = ULONG_MAX;
    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "uint is " << sizeof(unsigned int) << " bytes." << endl;
    
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "ulong is " << sizeof(unsigned long) << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;
    cout << "Maximum values :" << endl;
    cout << "int: " << n_int << endl;
    cout << "uint: " << u_int << endl;

    cout << "short:" << n_short << endl;
    cout << "long:" << n_long << endl;
    cout << "ulong:" << u_long << endl;
    cout << "long long:" << n_llong << endl
         << endl;
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    cin >> n_int;
    return 0;
}