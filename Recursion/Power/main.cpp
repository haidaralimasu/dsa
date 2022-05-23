#include <iostream>
using namespace std;

int power(int base, int exp);

int main(int argc, char const *argv[])
{
    int base, exp, result;
    base = 2;
    exp = 3;
    result = power(base, exp);

    cout << "result " << result << endl;
    return 0;
}

int power(int base, int exp) {
    if(exp != 0 ) {
        return power(base, exp - 1) * base;
    } else {
        return 1;
    }
}