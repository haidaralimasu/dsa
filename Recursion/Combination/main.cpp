#include <iostream>
using namespace std;

int factorial(int n);
int combination(int n, int r);

int main(int argc, char const *argv[])
{   
    int n = 5,r = 3;
    cout << "Result " << combination(n, r) << endl;
    return 0;
}

int factorial(int n) {
    if( n == 0 || n ==1 )
    {
        return 1;
    } else {
        return n * factorial( n-1 );
    }
    
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n -r));
}
